/*
Virtual meaning in le men term :- if anything is not physically present but can give similar input then it is said to be virtual

Virtualization:- It is the technique of splitting a Physical resource into as many logical resource as we want eg:- CPU, memory
       
       OR

Virtualisation is a technology that transform hardware(Physical) into software(Logical) 

we can add multiple resources to use it as one.

LOgical Unit number(LUN)


layer diagram:=

vm vm vm
HYpervisor
Hardware

BENEFIT

Saving money as same resource is used by many people.
without virtualisation we have to buy more server for work which is not used 24*7

one server cannot communicate with each other directly, the
each vm is isolated , req can be transferred from server
*/



/*
HYPERVISOR:-
hypervisor is a piece of software or firmware that creates and run Virtual Machine. A hypervisor is sometimes also called as Virtual Machine Management(VMM).


Types of Hypervisor
1)Type-1 Hypervisor or bare Metal or Native Hypervisor  (USed in companies)
2)Type-2 Hypervisor or Hosted Hypervisor (Used for learning purpose or testing)

//TYPE_1 Hypervisor (Firmware as it is directly installed above hardware whereas software is installed above host OS)
also called as Bare Metal Hypervisor Type-1 Hypervisor run directly on the system hardware . A guest OS runs on another level above the hypervisor.

VMware ESXi (VMware ke hypervisor ka naam hai ESXi) is a Type-1 Hypervisor that runs on the host server hardware without an Underlying O.S.

ESXi(hypervisor) provides a Virtualization layer that abstracts the CPU, storage, memory and networking resources of the physical host into multiple virtual Machine

VMware ke suite ko VSphere kehte hai

Type-1 hypervisor act as their own operating system

OS   OS   OS  (window, ubuntu , linux etc)
VM   vm   VM 
HYpervisor   (ESXi)
Hardware    (Host)

TYPE-2 Hypervisor

Hypervisor that runs within a conentional OS environment, and the host OS provides

Example of Type-2 Hypervisor are VMware Workstation, Oracle VirtualBox and Microsoft Virtual P.c

It does not have direct access to the host hardware and resources

Guest OS  Guest OS
VM         VM
Hypervisor
Host OS window 10
Hardware Host
*/

/*laptop m pehle windows(os) installed hota hai tbhi uspr koi application install krsakte hai jaise phone m pehle android ya ios install hoga tbhi uspr whatsapp ya koi or application install hoga

firmware me os ki jarurat nhi hoti wo directly hardware pr chal jata hai
*/
















