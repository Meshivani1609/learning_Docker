/*
Why port Expose:- we can access the conatiner while being inside the conatiner, so how can be access the conatiner through internet.

conatiner ka khudka IP address nhi hota

Internet se kuch bhi access krne k liye IP bhut jaruri hota hai.

For every work there is different port.

Port 80 is fixed for conatiner so that an user through internet can access container through port 80.

port 80 of host is mapped with port 80 of conatiner 

-td :- it means ki docker machine bana de main bas us machine k andar nhi jana chahta bas bana de

-p :- which port will be expsosed
80(Host port number):80(conatiner port number)

agar hm sirf expose krenge to ek conatiner dusre conatiner ke sath communicate kr sakta hai pr internet se access nhi hoga

lekin port(-p for 80 number port) ka use krke hm internet ke through access kr sakte hai

hm expose krke -p laga sakte hai lekin hm directly -p kr sakte hai usse expose automatically hojayega


********DOKCER PORT EXPOSE*********

dokcer run -td --name techserver(conatiner_name) -p 80:80

->docker ps
->docker port techserver(conatiner_name)  //us conatiner k jo bhi port mapp ho rakhe honge sare nazar aayenge

->docker exec -it techserver /bin/bash

exec:- to go inside the conatiner , pr isme naya process start hota hai

attach:- to go inside the container ,isme hm existing process k andar jate hai

ubuntu pr update krne k liye we use command
apt-get update

to download apache server we use command 
apt-get install apache2 -y


<<<<<<<<<<<<<<<DIFFERENCE BETWEEN DOCKER ATTACH AND DOCKER EXEC>>>>>>>>>>>>>>>>>>

docker exec creates a new process in the conatiners environment while docker attach just connect the standard Input/Output of the main process inside the container to corresponding standard inout/output error of current terminal

docker exec is spe cifically for running new things in a already started container, be it a shell or some other process


<<<<<<<<<<<<< Difference between expose and publish a docker>>>>>>>>>>>>>>>>>

Basically you have three options:-
1) Neither specify expose nor -p
2) Only specify expose
3) Specify expose and -p

**) If you specify neither expose nor -p the service in the conatiner will only be accessible from inside the conatiner

**) If you expose a port, the service in the conatiner is not accessible from outside docker, but from inside other docker containers, so this is good for inter-container communication

**) if you expose and -o a port, the service in the container is accessible from anywhere, even outside docker.

**) if you do -p but do not expose docker does an implicit expose. This is because, if a port is open to the public, it is automatically also open to the other docker containers. 


COMMANDS
->service docker start
-> docker run -td --name techserver -p 80:80 ubuntu
->docker port techserver   //jitne port map horakhe h wo nazar aajyenge
->docker exec -it techserver /bin/bash
->apt-get update
->apt-get install apache2 -y
-> cd /var/www/html   //default directory
->echo "Subscribe technical guftgu channel" >index.html    //default comment
-> service apache2 restart

copy public id

paste the ip in internet then we can see the same msg which we created in container


<-------------For Jenkins-------------->

docker run -td --name myjenkins -p 8080:8080 jenkins


























































*/













