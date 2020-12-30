close all
clc

Vid = VideoWriter('Sim01.avi');
open(Vid);

figure
Nm = 2;
Tf = (length(Po.signals(1).values));
plot3(Po_des.signals.values(:,1),Po_des.signals.values(:,2),-Po_des.signals.values(:,3),'--r','LineWidth',3);
hold on
for i=3:50:Tf
    if i>5003
        Nm = i - 5000;
    else
        Nm = 2;
    end
    Pos_Axis_X = [Po.signals(1).values(i)-d1 Po.signals(1).values(i)+d1;
        Po.signals(2).values(i) Po.signals(2).values(i);
        -Po.signals(3).values(i) -Po.signals(3).values(i)]';
    Pos_Axis_Y = [Po.signals(1).values(i) Po.signals(1).values(i);
        Po.signals(2).values(i)-d2 Po.signals(2).values(i)+d2;
        -Po.signals(3).values(i) -Po.signals(3).values(i)]';
    Pos_Rect = [Po.signals(1).values(i)+d1 Po.signals(1).values(i)-d1 Po.signals(1).values(i)-d1 Po.signals(1).values(i)+d1 Po.signals(1).values(i)+d1;
        Po.signals(2).values(i)+d2 Po.signals(2).values(i)+d2 Po.signals(2).values(i)-d2 Po.signals(2).values(i)-d2 Po.signals(2).values(i)+d2;
        -Po.signals(3).values(i) -Po.signals(3).values(i) -Po.signals(3).values(i) -Po.signals(3).values(i) -Po.signals(3).values(i)]';
    Pos_Link_1 = [Po.signals(1).values(i)+d1 P1.signals(1).values(i);
        Po.signals(2).values(i) P1.signals(2).values(i);
        -Po.signals(3).values(i) -P1.signals(3).values(i)]';
    Pos_Link_2 = [Po.signals(1).values(i)-d1 P2.signals(1).values(i);
        Po.signals(2).values(i) P2.signals(2).values(i);
        -Po.signals(3).values(i) -P2.signals(3).values(i)]';
    Pos_Link_3 = [Po.signals(1).values(i) P3.signals(1).values(i);
        Po.signals(2).values(i)+d2 P3.signals(2).values(i);
        -Po.signals(3).values(i) -P3.signals(3).values(i)]';
    Pos_Link_4 = [Po.signals(1).values(i) P4.signals(1).values(i);
        Po.signals(2).values(i)-d2 P4.signals(2).values(i);
        -Po.signals(3).values(i) -P4.signals(3).values(i)]';
    time = ['time = ',num2str(Po.time(i)),'sec'];
    h00 = plot3(Pos_Rect(:,1),Pos_Rect(:,2),Pos_Rect(:,3),'k','LineWidth',3);
    hold on
    h0 = plot3(Pos_Axis_X(:,1),Pos_Axis_X(:,2),Pos_Axis_X(:,3),'k','LineWidth',1);
    hold on
    h1 = plot3(Pos_Axis_Y(:,1),Pos_Axis_Y(:,2),Pos_Axis_Y(:,3),'k','LineWidth',1);
    hold on
    h2 = plot3(Pos_Link_1(:,1),Pos_Link_1(:,2),Pos_Link_1(:,3),'--k','LineWidth',1.5);
    hold on
    h3 = plot3(Pos_Link_2(:,1),Pos_Link_2(:,2),Pos_Link_2(:,3),'--k','LineWidth',1.5);
    hold on
    h4 = plot3(Pos_Link_3(:,1),Pos_Link_3(:,2),Pos_Link_3(:,3),'--k','LineWidth',1.5);
    hold on
    h5 = plot3(Pos_Link_4(:,1),Pos_Link_4(:,2),Pos_Link_4(:,3),'--k','LineWidth',1.5);
    hold on
    hm1 = plot3(Po.signals(1).values(Nm:i),Po.signals(2).values(Nm:i),-Po.signals(3).values(Nm:i),'r','LineWidth',1);
    hold on
    hm2 = plot3(P1.signals(1).values(Nm:i),P1.signals(2).values(Nm:i),-P1.signals(3).values(Nm:i),'b','LineWidth',0.2);
    hold on
    hm3 = plot3(P2.signals(1).values(Nm:i),P2.signals(2).values(Nm:i),-P2.signals(3).values(Nm:i),'g','LineWidth',0.2);
    hold on
    hm4 = plot3(P3.signals(1).values(Nm:i),P3.signals(2).values(Nm:i),-P3.signals(3).values(Nm:i),'c','LineWidth',0.2);
    hold on
    hm5 = plot3(P4.signals(1).values(Nm:i),P4.signals(2).values(Nm:i),-P4.signals(3).values(Nm:i),'m','LineWidth',0.2);
    axis([-4,4,-12,+2,Po.signals(3).values(i)-1,Po.signals(3).values(i)+4])
    title(time)
    xlabel('X(m)')
    ylabel('Y(m)')
    zlabel('Z(m)')
    grid
    frame = getframe(gcf);
    writeVideo(Vid,frame);
    pause(0.0005)
    if (i~=length(Po.signals(1).values))
        delete(h00)
        delete(h0) 
        delete(h1)
        delete(h2)
        delete(h3)
        delete(h4)
        delete(h5)
        delete(hm1(1))
        delete(hm2(1))
        delete(hm3(1))
        delete(hm4(1))
        delete(hm5(1))
    end
end

close(Vid);
