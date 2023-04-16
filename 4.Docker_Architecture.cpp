/*

Image jb running state me hoti hai to use container kehte hai

or container jab stop/pause state me rehta hai tb use image kehte hai

Advantages of Docker

1)No pre-allocation of RAM
2)Continuos Integration Efficiency:- Docker enables you to build a conatiner image and use that same image across every step of the deployement process

3) Less Cost (Container less costly hai)

4) it is light in weight(application which uses less resources(RAM/software) to operate)
Docker does not require RAM or OS

5) It can run on physical hardware(Laptop)/virtual h/w or on CLoud.

6) you can reuse the image 

7) It take very less time to create container

jb bhi hame koi conatiner banana hota hai tb hm docker hub se for example docker hub se ubuntu ki image lelete hai or agr usko share krna hai to image ko share krdete hai taki dusre ko pura process na krna pade wo direct image ke help se container bana le

we cannot make changes to image but we can make a conatiner from that image and then can make changes.

*/

/*
Disadvantages of DOcker

1)Docker is not a good solution for application that requires rich GUI
for that we can use VMware

2) Difficult to manage large amount of containers

3)Docker does not provide Cross-Platform compatibility means if an application is designed to run in a docker container on windows then it can't run on linux or vice-versa

4)Docker is suitable when the development OS and testing OS are same if the OS is different, we should use VM.  

ex:- suppose development os is ubuntu and testing os is centos then it will not work 

but if os is same in both the system then we should not worry about the files as it will take it from docker hub

How doker works in real life (Screenshot taken)


Docker Ecosystem:-

Docker CLient :- jaha hm apna code likhte  h ya file banayenge
//
Docker users can interact with docker daemon through a client(CLI).
Docker CLient uses commands and rest API to communicate with the docker daemon
When a CLient runs any server command on the docker client terminal, the client terminal sends these docker commands to the docker daemon.
It is possible for docker client to communicate with more than one daemon.

//

Docker Daemon or server/Docker engine:- hamare image ko conatiner m convert krega
//
Docker daemon runs on the host OS 
It is responsible for running containers to manage docker services

Docker Daemon can communicate with other daemons
//

Docker Hub/Registry:- Storage hai jaha sare image hote h
//
Docker registry manages and stores the docker images

There are two types of registries in the docker

1)Public Registry:- which is accesible by each and every person using docker .
it is also called as docker HUb

2)Private registry:-it is used to share images within enterprises.
//

DOcker Images:- template
//
Docker images are the read only binary templates used to create docker containers

single files with all dependencies and configuration required to run a program

<----Ways to create an images----->
*) TAke image from DOcker Hub
1) create image from docker file
2)Create image from existing docker containers.


Docker COnatiner :- It hold the entire package that is needed to run the application.
  OR

In other words we can say that the image is a template and the container is a copy of that template.

conatiner is like a virtual MAchine.

Images becomes conatiner when they run on docker engine

we cannot modify images but we can modify conatainer.


//

Docker Compose:- bhut sare container ko run kr sakte hai

Docker Host:-(like zamin for ghar hehehe) Docker host is used to provide an environment to execute and run applocations. It contains the docker daemon, images, containers, networks and storages.

































*/

























