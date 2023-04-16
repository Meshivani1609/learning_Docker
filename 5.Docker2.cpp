/*
1)TO see alll images present in our local machine

docker images
(jo images docker deomon m ho)

2)TO find out images in docker hub

docker search (name of image) ex ubuntu, centos

3) TO downlaod image from dockerhub to local machine

docker pull centos

isse ek copy aajyega local machine pr or jb bhi hme image lena hoga tb hm direct le sakte hai docker hub pr jaye bina (save image for future purpose)

4)TO make a name and create it

docker run(create/start) -it --name bhupinder ubuntu(name of
image jo docker hub se lana h) /bin/bash(taki command run kr sake)

-it -i se hm container ko interactive banate hai or t se terminal aata hai jispr hm command ko run krnge

docker run -it --name bhupinder ubuntu /bin/bash

5)To check service is start or not

service docker status(isse pata chlta hia docker engine start hai ya nhi)

6)To start container
docker start container_name

7)To go inside container

container ke ander jane k liye container start bhi hona chahiye

docker attach conatiner_name

8) TO see all conatiner
docker ps -a
ps:- process status 
-a all

9) To see only running container

docker ps

10)TO stop container
docker stop container_name

11)TO delete or remove container 
docker rm Container_name

12)To become root user 
sudo su

13)To update the package 
yum update -y

-y ;- it gives us option of yes/no

14)To install dokcer
yum install docker -y

15)To ckeck doceer version
docker -v
   OR
docker --version

16)service docker status 
 tell service is running or not
 
17) docker info
give information about docker

18)service docker start
it starts the docker

19) conatiner se exit krne ke liye
exit

20)For container information
cat /etc/os-release

21) bina hub m jaye kaise search kr sakte hai

use command docker search

if we want to search for any specific image

docker search jenkins


22)docker run -it --name bhupinderrajput ubuntu /bin/bash

23) kisi stop conatiner ko start krna h to

docker start bhupinderrajput

24) To stop container 

docker stop bhupinderrajput

NOTE:- remove krne se pehle container ko stop krna hoga















































*/

























