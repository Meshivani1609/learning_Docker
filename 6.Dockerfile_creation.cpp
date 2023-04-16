/*
Docker daemon docker hub se image lekr ata hai uska ek copy apne pass rakh leta hai taki dubara usko docker hub se na lena pade.

hum apne container ka image share kr sakte hai taki dusre ko same kam na krna pade


We have to create container from our own image

therefore, create one conatiner first

docker run -it --name bhupicontainer ubuntu /bin/bash

cd temp/

Now create one file inside this temp directory

touch myfile

Now if you want to see the difference bewteen the base image and changes on it then

docker diff bhupicontainer 

o/p C  /root                     //change
    A  /root/.bash_history       //append or addition
    C  /temp                     //change
    A  /temp/myfile
    D                            //deletion


*********Now create image of this conatiner
 
docker commit newcontainer (conatiner name) updateimage(name of image)

//docker commit se container se image bana lete hai or phir baad m imagr se container bana lete h

docker images //to see the image

Now create container from this image

docker run -it --name rajcontainer updateimage /bin/bash

1) to make a file use touch filename


<----------DOCKERFILE------------->


Dockerfile is basically a text file. It conatims some set of instruction.

whenever we create a docker file we will name it as Dockerfile. D-> capital
Instruction should be in capital letter

Automation of Docker image Creation

<-----------Docker Components -------------->

FROM :- For base image, This command must be on top of the dockerfile.

RUN :- To execute commands, it will create a layer in image.

MAINTAINER :- Author name/ Owner/ Description

COPY :- Copy files from local system (docker VM) we need to provide Source, Destination (We can't download file from internet and any remote repo)

ADD :- Similar to COPY but, it provides a feature to download files from internet, also
we extract file at docker image side

EXPOSE :- To exposr ports such as port 8080 for tomcat, port 80 for ngix etc.

WORKDIR :- TO set working directory for a container

CMD :- Execute commanda but during conatiner creation

ENTRYPOINT :- Similar to CMD, but has higher priority over CMD, first commands will be executed by ENTRYPOINT only

ENV - Environment variables
key value ban jata hai 
jaise jaha bhi myname aayega waha bhupinder ajayega

ARG :- You can use the ARG command inside a Dockerfile to define the name of a parameter and its default value. This default value can also be overridden using a simple option with the Docker build command


1) Create a file named Dockerfile
2) Add instructions in Dockerfile
3) Build Dockerfile to create image
4) Run image to create container

vi DOckerfile
FROM ubuntu
RUN echo "Technical guftgu">/temp/testfile

TO create image out od Dockerfile

docker build -t myimg .  //dot . means current directory  // -t is for tag
docker ps -a
docker images

Now Create Container from the above image

docker run -it --name myconatiner(container ka naaam) myimg(jis image se container bana uska naam) bin/bash

screenshot















































































































*/