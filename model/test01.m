clear
clc

d1 = 1;
d2 = 1;
l = 1;

s1 = [0 0 0;
    0 0 -d1;
    0 d1 0];

s2 = [0 0 0;
    0 0 d1;
    0 -d1 0];

s3 = [0 0 d2;
    0 0 0;
    -d2 0 0];

s4 = [0 0 -d2;
    0 0 0;
    d2 0 0];

B = [eye(3) eye(3) eye(3) eye(3);
    s1 s2 s3 s4;
    1 0 0 1 0 0 0 0 0 0 0 0;
    0 0 0 0 0 0 0 1 0 0 1 0;
    1 0 0 0 0 0 0 0 0 0 0 0;
    0 0 0 0 0 0 0 1 0 0 0 0];

M = B*B';

rank_M = rank(M)
det_M = det(M)

u_t = [5;8;20];
u_r = [0;0;0];

rx_des = 2*(l+d1) - 1;
ry_des = 2*(l+d2) - 1;
q1 = (rx_des - (2*d1)) / (2*l);
q2 = (ry_des - (2*d2)) / (2*l);
K1 = sqrt( ((u_t(2)/2)^2 + (u_t(3)/4)^2) / ((1/(q1^2))-(1/1)) );
K2 = sqrt( ((u_t(1)/2)^2 + (u_t(3)/4)^2) / ((1/(q2^2))-(1/1)) );

u = [u_t;u_r;0;0;K1;K2];

X = B' * (M^-1) * u

for i=1:4
    F(i,1) = sqrt( X((3*(i-1)+1):(3*(i-1)+3))'*X((3*(i-1)+1):(3*(i-1)+3)) );
    Alpha(i,1) = asin( X(3*(i-1)+3,1)/F(i,1) ) * 180/pi;
    Beta(i,1) = atan2( X(3*(i-1)+2,1),X(3*(i-1)+1,1) ) * 180/pi;
end

F
Alpha
Beta

Pos_load = [0;0;0];
Pos(1:3,1) = Pos_load + [d1+l*cosd(Alpha(1))*cosd(Beta(1));l*cosd(Alpha(1))*sind(Beta(1));l*sind(Alpha(1))];
Pos(1:3,2) = Pos_load + [-d1+l*cosd(Alpha(2))*cosd(Beta(2));l*cosd(Alpha(2))*sind(Beta(2));l*sind(Alpha(2))];
Pos(1:3,3) = Pos_load + [l*cosd(Alpha(3))*cosd(Beta(3));d2+l*cosd(Alpha(3))*sind(Beta(3));l*sind(Alpha(3))];
Pos(1:3,4) = Pos_load + [l*cosd(Alpha(4))*cosd(Beta(4));-d2+l*cosd(Alpha(4))*sind(Beta(4));l*sind(Alpha(4))];

Pos

    
