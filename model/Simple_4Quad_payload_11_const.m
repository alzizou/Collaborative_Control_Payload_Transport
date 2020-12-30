clear
clc

m = 1.5;
M = 5.0;
g = 9.81;
l = 1.0;
d1 = 0.5;
d2 = 0.5;
Ph = 0.2;
Pw = 1.0;
Pd = 0.8;
Ix = (1/12*M)*((Ph^2)+(Pd^2)); %0.2;
Iy = (1/12*M)*((Ph^2)+(Pw^2)); %0.2;
Iz = (1/12*M)*((Pw^2)+(Pd^2)); %0.2;
Jo = diag([Ix;Iy;Iz]);
Jq = diag([0.08 0.08 0.14]); % Polar moment of inertia for the quadrotor (matrix)

All_rho = ...
    [d1 0 0;
    -d1 0 0;
    0 d2 0;
    0 -d2 0];

delta = 2.0*l;
Des_rel_dist = (2*l+d1+d2) - delta;

alphaTF = 0.5;

xo_init = 0;
yo_init = 0;
zo_init = 0;

%% Observer
var_u_ob = 0e3;
var_y_ob = 0e3;
C_ob = [eye(3) zeros(3)];
B_ob = [zeros(3);eye(3)];
Q_ob = var_u_ob * eye(6);
R_ob = var_y_ob * eye(3);
alpha_ob = 1.0;

noise_var_Omegao = 0e-6;
noise_var_RelPos = 0e-6; 
noise_var_RelAcc = 0e-6;

%% General 
n = 6;
np = 3;
k1 = 10;
k2 = 1;
cons_sld = 0.01;
alpha_chatt = cons_sld;

max_att = pi/3;
Max_Vel = 2.0;

R = 1e+0*eye(n);
BR = 1e0*eye(n);
BBT_inv = ((BR'*BR)^(-1))*BR';

Rp = 1e+0*eye(np);
BRp = 1e0*eye(np);
BBT_invp = ((BRp'*BRp)^(-1))*BRp';

%% AMFC - Rotatioal
QR = 1e-0*eye(n);
gamma_1 = 1e+2*diag([1e-3*ones(3,1);1e-0*ones(3,1)]);
rho_1 = 1e-0;
gamma_0 = 1e+0*diag([1e-3*ones(3,1);1e-0*ones(3,1)]); 
rho_0 = 1e-2;

%% AMFC - links
QL = 1e-2*eye(n);
gamma_1L = 1e+0*diag([1e-3*ones(3,1);1e-3*ones(3,1)]);
rho_1L = 1e-0;
gamma_0L = 1e+0*diag([1e-3*ones(3,1);1e-3*ones(3,1)]); 
rho_0L = 1e-0;

%% AMFC - Payload-velocity
Qv = 1e-2*eye(np);
gamma_1v = 1e+0*diag(1e-0*ones(3,1));
rho_1v = 1e-0;
gamma_0v = 1e+0*diag(1e-0*ones(3,1)); 
rho_0v = 1e-0;

%% AMFC - Payload-position
Qp = 1e-2*eye(np);
gamma_1p = 1e+0*diag(1e-6*ones(3,1));
rho_1p = 1e-0;
gamma_0p = 1e-0*diag(1e-6*ones(3,1)); 
rho_0p = 1e-0;

%% AMFC - Payload-attitude
Qa = 1e-0*eye(np);
gamma_1a = 1e+0*diag(1e-6*ones(3,1));
rho_1a = 1e-0;
gamma_0a = 1e-0*diag(1e-6*ones(3,1)); 
rho_0a = 1e-0;

%% AMFC - Payload-attitude rate
Qr = 1e-0*eye(np);
gamma_1r = 1e+0*diag(1e-6*ones(3,1));
rho_1r = 1e-0;
gamma_0r = 1e-0*diag(1e-6*ones(3,1)); 
rho_0r = 1e-0;

