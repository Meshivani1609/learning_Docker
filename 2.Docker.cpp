/*
Conatiner is like a virtual Machine

Docker engine is a tool which create this virtual machine i.e container
actually Docker is an engine , docker is a comapny.

docker is a advance version of virtualisation
main function of docker is containerisation

DEVOPS
Dev(development) + OPs(Operation) 

development team -> testing team -> Production/operation team

hosakta hai jo software dev team ke pass ho wo testing team k pass na ho ya updated version na ho

solution :- ki app k sath supported software ka updated version bhi bhja jaye lekin ho sakta hai kuch software pehle se downloaded ho

Solution:- send app+OS+software
ab direct tester vm k upar file ko run kre
lekin real time m os ko share kr sake, we can share software but not the OS

solution:- we will use hypervisor to virtualise our environment

Dependencies mean the resources (tools, supported softwares) required for application to run

COoatiner  Container (Iska Khudka OS nhi hota ye host os ko use krta hai) //conatiner according to situation resource leta hai harware se or jaise kaam hojata hai resource wapas krke close hojata h.

container have their own registry/hub known as docker Hub.
Docker Hub have each and evry file/folder required for application to run.

conatiner
Docker Engine
OS
Hardware


In VMware if virtual machine is created they take equal part even if it use the  resources or not this is the same case with AWS EC2

but in Docker they take resources when they need it and then after work they return it.

The number of virtual machine is limited but the number of container is not limited.

when we need anything to do in docker we give command and then docker checks in docker hub and run it and give  required resources 

In conatiner provides dependencies for an application to run.
*/




















