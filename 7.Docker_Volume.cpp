/*
Dockerfile se image banaye or image is container

Volume is like normal directory(Folder) which can be shared with others.

volume ko kuch responsibility diya gya hai ki wo volume ko share jr skate hai dusre container k sath.

Volume ke through hmlog host to container bhi file or information share kr sakte hai

Volume is simply a directory inside our conatiner

Firstly, We have to declare this directory as a volume and then share volume

Even if we stop container, still we can access volume.

Volume will be created in one conatiner

You can declare a directory as a volume only while creating container

you can't create volume from existing container.

You can share one volume across any number of container

Volume will not be included when you update an image.

YOu can mapped volume in two ways
1) conatiner <--> container
2) Host <--> Container

<____________USES OF VOlume ________________>

1)Decoupling container from storage
even if we delete conatiner then also volumes remains there and data is not lost.

2)Share VOlume among different containers

3)Attach Volume to Container

4)On deleting container Volume does not get deleted.


<--------------CREATING A VOLUME FROM DOCKERFILE----------->

vi Dockerfile //isse hm editor m pahuch jate hai

to come out of the editor
use  :wq

1) Create a Dockerfile and Write

FROM ubuntu             
VOLUME ["/myvolume1"]

:wq
//exit hogye dockerfile se
Then create image from this dockerfile
  docker build -t myimage .   build:-image banane k liye build command use krte h


Now create a container from this image and run

docker run -it --name container1(konsa container banana hai) myimage(kis image se banana h) /bin/bash  

Now do ls you can see myvolume1 directory

Now share volume with another container

If we want to attch an volume to an container we have to do it intially while creating the conatiner

command

docker run -it --name container2(new) --privileged=true  --volumes-from container1 ubuntu /bin/bash

Now after creating Container2, myvolume1 is visible whatever you do in one volume, can see from other volume

-> touch /myvolume1/samplefile   //conatiner2 m sample file banai
-> docker start container1    //conatiner1 k andar gye
-> docker attach conatiner1  //phir attach krna hogaa isse hm container k andar jate h
-> ls/myvolume1    //ab samplr file conatiner1 m dikhega

you can see samplefile here

exit

******************Now, try to create Volume by using command****************

-> docker run -it --name container3 -v /volume2 ubuntu /bin/bash
//banate time hi hmlog root directory / iska mtlnb root directory hota hai usme hm ek volume bana rhe h volume2 naam se -v means ki wo as a volume kaam krega

Do ls -> cd/volume2

Now create one file Cont3file and exit

Now create one more container and share volume2

-> docker run -it --name container4 --privilege=true --volumes-from container3 ubuntu /bin/bash

Now you are inside container, do ls , you can see volume2

Now create one file inside this volume and then check in container#, you can see that file


************Volumes (Host-Container)************

verify files in /home/ec2-user(ec2-user is a directory)


-> docker run -it --name hostcont -v /home/ec2-user:/rajput  --privileged=true  ubuntu  /bin/bash

-> docker run -it --name hostcont(conatiner name) -v(volume is created in aage ka part hehehe) /home/ec2-user(ye hai host k directory ka path):(: jo hai wo relation establish krta h)/rajput(conatiner k directory ka path)(dono ko volume bana diya or dono ko map krdiya hai jisse dono share kr sake file )  --privileged=true  ubuntu  /bin/bash

-> cd /rajut
-> Do ls, now you can see all files of host machine
-> touch rajputfile(in container) 
->exit

Now check in EC2 machine , you can see the file


<-------SOME OTHER COMMANDS------------->
1) docker volume ls     //jitni bhi volume create hui hai unka list
2) docker volume Create <volumename>  //aise bhi volume create kr sakte hai
3) docker volume rm <volumeName>  //koi running conatiner ko remove krna ho to krsakte hai
4) docker volume prune {It removed all unused docker volume}
5) docker volume inspect <volumename>  //volume ki details check krne k liye
6) docker container inspect <volumename> //conatiner se related details check krne k liye









































































*/