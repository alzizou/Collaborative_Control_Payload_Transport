close all

figure
subplot(3,1,1)
plot(Po.time,Po.signals(1).values,'r-','LineWidth',3)
title("absolute positions of the payload")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,2)
plot(Po.time,Po.signals(2).values,'r-','LineWidth',3)
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(Po.time,Po.signals(3).values,'r-','LineWidth',3)
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid

figure
subplot(3,1,1)
plot(omega_o.time,omega_o.signals(1).values,'r-','LineWidth',3)
title("angular velocity of the payload")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,2)
plot(omega_o.time,omega_o.signals(2).values,'r-','LineWidth',3)
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(3,1,3)
plot(omega_o.time,omega_o.signals(3).values,'r-','LineWidth',3)
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid

figure
subplot(2,2,1)
plot(omegai_1.time,omegai_1.signals(1).values,omegai_1.time,omegai_1.signals(2).values,omegai_1.time,omegai_1.signals(3).values,'LineWidth',3)
title("angular velocities of the link-1")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,2)
plot(omegai_2.time,omegai_2.signals(1).values,omegai_2.time,omegai_2.signals(2).values,omegai_2.time,omegai_2.signals(3).values,'LineWidth',3)
title("angular velocities of the link-2")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,3)
plot(omegai_3.time,omegai_3.signals(1).values,omegai_3.time,omegai_3.signals(2).values,omegai_3.time,omegai_3.signals(3).values,'LineWidth',3)
title("angular velocities of the link-3")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,4)
plot(omegai_4.time,omegai_4.signals(1).values,omegai_4.time,omegai_4.signals(2).values,omegai_4.time,omegai_4.signals(3).values,'LineWidth',3)
title("angular velocities of the link-4")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid

figure
subplot(2,2,1)
plot(omegaq_1.time,omegaq_1.signals(1).values,omegaq_1.time,omegaq_1.signals(2).values,omegaq_1.time,omegaq_1.signals(3).values,'LineWidth',3)
title("angular velocities of the quad-1")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,2)
plot(omegaq_2.time,omegaq_2.signals(1).values,omegaq_2.time,omegaq_2.signals(2).values,omegaq_2.time,omegaq_2.signals(3).values,'LineWidth',3)
title("angular velocities of the quad-2")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,3)
plot(omegaq_3.time,omegaq_3.signals(1).values,omegaq_3.time,omegaq_3.signals(2).values,omegaq_3.time,omegaq_3.signals(3).values,'LineWidth',3)
title("angular velocities of the quad-3")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
subplot(2,2,4)
plot(omegaq_4.time,omegaq_4.signals(1).values,omegaq_4.time,omegaq_4.signals(2).values,omegaq_4.time,omegaq_4.signals(3).values,'LineWidth',3)
title("angular velocities of the quad-4")
set(gca,'FontSize',16)
set(gca,'FontWeight','bold')
grid
