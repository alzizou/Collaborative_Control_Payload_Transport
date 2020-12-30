clear
clc

m1 = 1;
m2 = 1;
M = 1;
g = 9.81;
l1 = 1;
l2 = 1;
d = 1;
I = 1;

k21=1;
k22=1;
k31=1;
k32=1;

D_Xd_M = [10;10;10];

%%
n = 2;
gamma_1 = 1e+2*diag([1e-3;1e-0]);
rho_1 = 1e-0;
gamma_0 = 1e-0*diag([1e-3;1e-0]); 
rho_0 = 1e-0;

k1 = 1;
k2 = 0.1;
R = 1e+0*eye(n);
Q = 1e-1*eye(n);
B = 1e0*eye(n);
BBT_inv = ((B'*B)^(-1))*B';
