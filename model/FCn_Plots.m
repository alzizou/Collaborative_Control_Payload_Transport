close all
clc 

%% 3D design
% figure
% plot3(Po.signals(1).values(2:end),Po.signals(2).values(2:end),Po.signals(3).values(2:end),'r','LineWidth',3)
% hold on
% plot3(P1.signals(1).values(2:end),P1.signals(2).values(2:end),P1.signals(3).values(2:end),'b','LineWidth',3)
% hold on
% plot3(P2.signals(1).values(2:end),P2.signals(2).values(2:end),P2.signals(3).values(2:end),'g','LineWidth',3)
% hold on
% plot3(P3.signals(1).values(2:end),P3.signals(2).values(2:end),P3.signals(3).values(2:end),'k','LineWidth',3)
% hold on
% plot3(P4.signals(1).values(2:end),P4.signals(2).values(2:end),P4.signals(3).values(2:end),'m','LineWidth',3)
% title("Positions of centeroids of the payload and the drones in X-Y plane")
% xlabel('X(m)')
% ylabel('Y(m)')
% zlabel('Z(m)')
% legend('Payload','Drone-1','Drone-2','Drone-3','Drone-4')
% set(gca,'FontSize',16)
% set(gca,'FontWeight','bold')
% grid

%% payload plots
figure
subplot(3,1,1)
plot(Po_des.time,Po_des.signals.values(:,1),'--r','LineWidth',4)
hold on
plot(Po_des.time,Po.signals(1).values,'b','LineWidth',3)
title("Desired and actual positions of the payload in 3D environment")
xlabel('time (sec)')
ylabel('x-axis position (m)')
legend('desired','actual')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,2)
plot(Po_des.time,Po_des.signals.values(:,2),'--r','LineWidth',4)
hold on
plot(Po_des.time,Po.signals(2).values,'b','LineWidth',3)
xlabel('time (sec)')
ylabel('y-axis position (m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Po_des.time,Po_des.signals.values(:,3),'--r','LineWidth',4)
hold on
plot(Po_des.time,Po.signals(3).values,'b','LineWidth',3)
xlabel('time (sec)')
ylabel('z-axis position (m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid

figure
subplot(3,1,1)
plot(Vo.time,Vo.signals(1).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('V_x(m/s)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("Velocity of the payload centroid in 3D motion")
subplot(3,1,2)
plot(Vo.time,Vo.signals(2).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('V_y(m/s)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Vo.time,Vo.signals(3).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('V_z(m/s)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid


figure
subplot(3,1,1)
plot(Phi.time,Phi.signals(1).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('phi(rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("Euler angles of the payload in 3D motion")
subplot(3,1,2)
plot(Phi.time,Phi.signals(2).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('theta(rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Phi.time,Phi.signals(3).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('psi(rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid

%% Absolute and Relative pos of the drones
figure
subplot(3,1,1)
plot(Rel_pos_12.time,Rel_pos_12.signals(1).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('x-axis position(m)')
title("Relative position of the drone-1 and drone-2 in 3D environment")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,2)
plot(Rel_pos_12.time,Rel_pos_12.signals(2).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('y-axis position(m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Rel_pos_12.time,Rel_pos_12.signals(3).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('z-axis position(m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid


figure
subplot(3,1,1)
plot(Rel_pos_34.time,Rel_pos_34.signals(1).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('x-axis position(m)')
title("Relative position of the drone-3 and drone-4 in 3D environment")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,2)
plot(Rel_pos_34.time,Rel_pos_34.signals(2).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('y-axis position(m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Rel_pos_34.time,Rel_pos_34.signals(3).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('z-axis position(m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid


figure
subplot(2,2,1)
plot(P1.time,P1.signals(1).values,'b','LineWidth',3)
hold on
plot(P1.time,P1.signals(2).values,'r','LineWidth',3)
hold on
plot(P1.time,P1.signals(3).values,'g','LineWidth',3)
xlabel('time(s)')
ylabel('position(m)')
title("Position of the drone-1")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
legend('x','y','z')
subplot(2,2,2)
plot(P2.time,P2.signals(1).values,'b','LineWidth',3)
hold on
plot(P2.time,P2.signals(2).values,'r','LineWidth',3)
hold on
plot(P2.time,P2.signals(3).values,'g','LineWidth',3)
xlabel('time(s)')
ylabel('position(m)')
title("Position of the drone-2")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,3)
plot(P3.time,P3.signals(1).values,'b','LineWidth',3)
hold on
plot(P3.time,P3.signals(2).values,'r','LineWidth',3)
hold on
plot(P3.time,P3.signals(3).values,'g','LineWidth',3)
xlabel('time(s)')
ylabel('position(m)')
title("Position of the drone-3")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,4)
plot(P4.time,P4.signals(1).values,'b','LineWidth',3)
hold on
plot(P4.time,P4.signals(2).values,'r','LineWidth',3)
hold on
plot(P4.time,P4.signals(3).values,'g','LineWidth',3)
xlabel('time(s)')
ylabel('position(m)')
title("Position of the drone-4")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid

%% q of the links
figure
subplot(3,1,1)
plot(q1_des.time,q1_des.signals(1).values,'--r','LineWidth',4)
hold on
plot(q1.time,q1.signals(1).values,'b','LineWidth',3)
hold on
plot(q_hat1.time,q_hat1.signals.values(:,1),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(1) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(1) for link-1")
legend('desired','actual','estimated')
subplot(3,1,2)
plot(q1_des.time,q1_des.signals(2).values,'--r','LineWidth',4)
hold on
plot(q1.time,q1.signals(2).values,'b','LineWidth',3)
hold on
plot(q_hat1.time,q_hat1.signals.values(:,2),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(2) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(2) for link-1")
subplot(3,1,3)
plot(q1_des.time,q1_des.signals(3).values,'--r','LineWidth',4)
hold on
plot(q1.time,q1.signals(3).values,'b','LineWidth',3)
hold on
plot(q_hat1.time,q_hat1.signals.values(:,3),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(3) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(3) for link-1")


figure
subplot(3,1,1)
plot(q2_des.time,q2_des.signals(1).values,'--r','LineWidth',4)
hold on
plot(q2.time,q2.signals(1).values,'b','LineWidth',3)
hold on
plot(q_hat2.time,q_hat2.signals.values(:,1),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(1) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(1) for link-2")
legend('desired','actual','estimated')
subplot(3,1,2)
plot(q2_des.time,q2_des.signals(2).values,'--r','LineWidth',4)
hold on
plot(q2.time,q2.signals(2).values,'b','LineWidth',3)
hold on
plot(q_hat2.time,q_hat2.signals.values(:,2),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(2) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(2) for link-2")
subplot(3,1,3)
plot(q2_des.time,q2_des.signals(3).values,'--r','LineWidth',4)
hold on
plot(q2.time,q2.signals(3).values,'b','LineWidth',3)
hold on
plot(q_hat2.time,q_hat2.signals.values(:,3),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(3) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(3) for link-2")


figure
subplot(3,1,1)
plot(q3_des.time,q3_des.signals(1).values,'--r','LineWidth',4)
hold on
plot(q3.time,q3.signals(1).values,'b','LineWidth',3)
hold on
plot(q_hat3.time,q_hat3.signals.values(:,1),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(1) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(1) for link-3")
legend('desired','actual','estimated')
subplot(3,1,2)
plot(q3_des.time,q3_des.signals(2).values,'--r','LineWidth',4)
hold on
plot(q3.time,q3.signals(2).values,'b','LineWidth',3)
hold on
plot(q_hat3.time,q_hat3.signals.values(:,2),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(2) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(2) for link-3")
subplot(3,1,3)
plot(q3_des.time,q3_des.signals(3).values,'--r','LineWidth',4)
hold on
plot(q1.time,q3.signals(3).values,'b','LineWidth',3)
hold on
plot(q_hat3.time,q_hat3.signals.values(:,3),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(3) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(3) for link-3")


figure
subplot(3,1,1)
plot(q4_des.time,q4_des.signals(1).values,'--r','LineWidth',4)
hold on
plot(q4.time,q4.signals(1).values,'b','LineWidth',3)
hold on
plot(q_hat4.time,q_hat4.signals.values(:,1),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(1) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(1) for link-4")
legend('desired','actual','estimated')
subplot(3,1,2)
plot(q4_des.time,q4_des.signals(2).values,'--r','LineWidth',4)
hold on
plot(q4.time,q4.signals(2).values,'b','LineWidth',3)
hold on
plot(q_hat4.time,q_hat4.signals.values(:,2),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(2) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(2) for link-4")
subplot(3,1,3)
plot(q4_des.time,q4_des.signals(3).values,'--r','LineWidth',4)
hold on
plot(q4.time,q4.signals(3).values,'b','LineWidth',3)
hold on
plot(q_hat4.time,q_hat4.signals.values(:,3),'g','LineWidth',2)
xlabel('time(s)')
ylabel('q(3) (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of q(3) for link-4")


%% Dq of the links
figure
subplot(3,1,1)
plot(Dq1.time,Dq1.signals(1).values,'--r','LineWidth',4)
hold on
plot(Dq_hat1.time,Dq_hat1.signals.values(:,1),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(1)/dt (rad/sec)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of dq/dt for link-1")
legend('actual','estimated')
subplot(3,1,2)
plot(Dq1.time,Dq1.signals(2).values,'--r','LineWidth',4)
hold on
plot(Dq_hat1.time,Dq_hat1.signals.values(:,2),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(2)/dt (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Dq1.time,Dq1.signals(3).values,'--r','LineWidth',4)
hold on
plot(Dq_hat1.time,Dq_hat1.signals.values(:,3),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(3)/dt (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid


figure
subplot(3,1,1)
plot(Dq2.time,Dq2.signals(1).values,'--r','LineWidth',4)
hold on
plot(Dq_hat2.time,Dq_hat2.signals.values(:,1),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(1)/dt (rad/sec)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of dq/dt for link-2")
legend('actual','estimated')
subplot(3,1,2)
plot(Dq2.time,Dq2.signals(2).values,'--r','LineWidth',4)
hold on
plot(Dq_hat2.time,Dq_hat2.signals.values(:,2),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(2)/dt (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Dq2.time,Dq2.signals(3).values,'--r','LineWidth',4)
hold on
plot(Dq_hat2.time,Dq_hat2.signals.values(:,3),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(3)/dt (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid


figure
subplot(3,1,1)
plot(Dq3.time,Dq3.signals(1).values,'--r','LineWidth',4)
hold on
plot(Dq_hat3.time,Dq_hat3.signals.values(:,1),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(1)/dt (rad/sec)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of dq/dt for link-3")
legend('actual','estimated')
subplot(3,1,2)
plot(Dq3.time,Dq3.signals(2).values,'--r','LineWidth',4)
hold on
plot(Dq_hat3.time,Dq_hat3.signals.values(:,2),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(2)/dt (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Dq3.time,Dq3.signals(3).values,'--r','LineWidth',4)
hold on
plot(Dq_hat3.time,Dq_hat3.signals.values(:,3),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(3)/dt (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid


figure
subplot(3,1,1)
plot(Dq4.time,Dq4.signals(1).values,'--r','LineWidth',4)
hold on
plot(Dq_hat4.time,Dq_hat4.signals.values(:,1),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(1)/dt (rad/sec)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("values of dq/dt for link-4")
legend('actual','estimated')
subplot(3,1,2)
plot(Dq4.time,Dq4.signals(2).values,'--r','LineWidth',4)
hold on
plot(Dq_hat4.time,Dq_hat4.signals.values(:,2),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(2)/dt (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Dq4.time,Dq4.signals(3).values,'--r','LineWidth',4)
hold on
plot(Dq_hat4.time,Dq_hat4.signals.values(:,3),'b','LineWidth',2)
xlabel('time(s)')
ylabel('dq(3)/dt (rad)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid

%% desired f
figure
subplot(2,2,1)
plot(f_des.time,f_des.signals(1).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('f_1(N)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("link-1")
subplot(2,2,2)
plot(f_des.time,f_des.signals(2).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('f_2(N)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("link-2")
subplot(2,2,3)
plot(f_des.time,f_des.signals(3).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('f_3(N)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("link-3")
subplot(2,2,4)
plot(f_des.time,f_des.signals(4).values,'b','LineWidth',4)
xlabel('time(s)')
ylabel('f_4(N)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
title("link-4")

%% Desired thrust at each drone
figure
subplot(2,2,1)
plot(Tau_q1.time,Tau_q1.signals(1).values,'b','LineWidth',3)
hold on
plot(Tau_q1.time,Tau_q1.signals(2).values,'r','LineWidth',3)
hold on
plot(Tau_q1.time,Tau_q1.signals(3).values,'g','LineWidth',3)
title('drone-1')
legend('roll','pitch','yaw')
xlabel('time(s)')
ylabel('torque(N.m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,2)
plot(Tau_q2.time,Tau_q2.signals(1).values,'b','LineWidth',3)
hold on
plot(Tau_q2.time,Tau_q2.signals(2).values,'r','LineWidth',3)
hold on
plot(Tau_q2.time,Tau_q2.signals(3).values,'g','LineWidth',3)
title('drone-2')
xlabel('time(s)')
ylabel('torque(N.m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,3)
plot(Tau_q3.time,Tau_q3.signals(1).values,'b','LineWidth',3)
hold on
plot(Tau_q3.time,Tau_q3.signals(2).values,'r','LineWidth',3)
hold on
plot(Tau_q3.time,Tau_q3.signals(3).values,'g','LineWidth',3)
title('drone-3')
xlabel('time(s)')
ylabel('torque(N.m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,4)
plot(Tau_q4.time,Tau_q4.signals(1).values,'b','LineWidth',3)
hold on
plot(Tau_q4.time,Tau_q4.signals(2).values,'r','LineWidth',3)
hold on
plot(Tau_q4.time,Tau_q4.signals(3).values,'g','LineWidth',3)
title('drone-4')
xlabel('time(s)')
ylabel('torque(N.m)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid

figure
subplot(2,2,1)
plot(U1.time,-1*U1.signals(3).values,'b','LineWidth',4)
title('drone-1')
xlabel('time(s)')
ylabel('thrust (N)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,2)
plot(U2.time,-1*U2.signals(3).values,'b','LineWidth',4)
title('drone-2')
xlabel('time(s)')
ylabel('thrust (N)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,3)
plot(U3.time,-1*U3.signals(3).values,'b','LineWidth',4)
title('drone-3')
xlabel('time(s)')
ylabel('thrust (N)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,4)
plot(U4.time,-1*U4.signals(3).values,'b','LineWidth',4)
title('drone-4')
xlabel('time(s)')
ylabel('thrust (N)')
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
