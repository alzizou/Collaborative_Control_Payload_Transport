clear
clc

m = 1;
M = 1;
g = 9.81;
l = 2;
d1 = 1;
d2 = 1;
Ix = 1;
Iy = 1;
Iz = 1;

delta = 2;
Des_rel_dist = 2*(l+d1) - delta;

Md = 1*[1;1;1;1;1;1]; 

kp1_N = 10;
kp2_N = 100;
kp1_S = 10;
kp2_S = 100;

ki1_N = 0;
ki2_N = 0;
ki1_S = 0;
ki2_S = 0;