
$\textrm{\large computer network: A computer network is a set of nodes connected by communication link.}$
<ul>
<li>$\textrm{nodes}$</li>
<li>$\textrm{media}$</li>
<li>$\textrm{service}$</li>
</ul>

$\textrm{Basic characteristics of compurter network-}$
<ol>
  <li>$\textrm{Fault tollerence:}$
   <ul>
     <li>$\textrm{Continue working despite of failures}$</li>
     <li>$\textrm{Ensuure no loss of service}$</li>
   </ul>
  </li>
  <li>$\textrm{Scalability:}$
   <ul>
     <li>$\textrm{Grow bosed on the needs.}$</li>
     <li>$\textrm{Have good performance after growth.}$</li>
   </ul>
  </li>
  <li>$\textrm{Quality of service:}$
   <ul>
     <li>$\textrm{set priorities.}$</li>
     <li>$\textrm{manage data traffic to reduce data loss,delay.}$</li>
   </ul>
  </li>
  <li>$\textrm{Security:}$
   <ul>
     <li>$\textrm{unouthorized access.}$</li>
     <li>$\textrm{misuse.}$</li>
     <li>$\textrm{forgery.}$</li>
   </ul>
  </li>
</ol>

$\textrm{\large Data communication:Data communication are the exchange of data between two nodes via some kind of link.}$
$\textrm{\large Data flow:}$

<ol>
  <li>$Simplex:$
   <ul>
     <li>$\textrm{always unidirectional}$</li>
   </ul>
  </li>
  <li>$Half-duplex:$
   <ul>
     <li>$\textrm{communication both direction but not in the same time.}$</li>
   </ul>
  </li>
  <li>$Full-duplex:$
   <ul>
     <li>$\textrm{communication in the same time.}$</li>
    
   </ul>
  </li>
</ol>

### Protocol:
$\textrm{\large Protocol:A protocol is a set of rules that govern data communications.}$

$-source/sender$

$-destination/receiver$

$-channel/media$
#### Elements of protocol:
$\textrm{i.message encoding}$

$\textrm{ii.message formatting}$

$\textrm{iii.message timing}$

$\textrm{iv.message size}$

$\textrm{v.message delivery option- unicast ,multicast,broadcast}$



#### peer to peer network:
 $-no centralize administration$
 
 $-all peers are same$
 
 $-simple sharing application$
 
 $-not scaleable$
 
 #### Classification of computer network:
 $\textrm{LAN-Limites Area Network}$
 
 $\textrm{MAN-Metropoliton Area Network}$
 
 $\textrm{WAN-wide Area Network}$

### IP Addressing:
  $\textrm{\large IP mean Internet Protocol}$
  
  $\textrm{Two types of IP}$
  
  $\textrm{i.IPv4}$
  
  $\textrm{ii.IPv6}$
  
  #### Charateristics of IP address
  <ol>
  <li>$\textrm{Every nodes in the computer network is identified with the help of IP address.}$</li>
  <li>$\textrm{Logical address.}$</li>
  <li>$\textrm{Can change based on the location of the device.}$</li>
  <li>$\textrm{Assigned by manually or dynamically.}$</li>
  <li>$\textrm{Represented in deciamal and it has 4 octets.}$</li>
  <li>$\textrm{Represented in hexadecimal.}$</li>
  <li>$\textrm{0.0.0.0 to 255.255.255.255 (32 bits).}$</li>
</ol>

#### MAC addressing 
 $\textrm{Media access control}$
 
 $\textrm{Router needs ->IP address}$
 
 $\textrm{Switch needs -> MAC address}$

$\textrm{Characteristics of MAC address}$
<ol>
  <li>$\textrm{Every node in the LAN is identified with the help of MAC address.}$</li>
  <li>$\textrm{Physical address or hardware address.}$</li>
  <li>$\textrm{Unique.}$</li>
  <li>$\textrm{Can not change.}$</li>
  <li>$\textrm{Assigned by the manufacturer.}$</li>
  <li>$\textrm{Represented in hexadecimal.}$</li>
  <li>$\textrm{Ex:70-20-84-00-ED-FC(48 bits).}$</li>
</ol>

| IP adress           | MAC address  |
| -------------| -----:|
|IP addresses is dynamic |MAC addresses are  permanent|
| 32 bits      |  48 bits |
| Represented inn decimal      |    Represented in hexadecimal |
|Router needs IP address to forward data | Switch needs MAC address to forward data  |
| IP addresses operate at the network layer (Layer 3)    |  MAC addresses operate at the data link layer (Layer 2)  |


$\textrm{Switching : switching in computer network helps in deciding the best route for data transmission if there are multiple paths in a layer.}$

switching -circ


#### Layering in computer networking
$\textrm{->layering means decomposing decomposing the problem into more managable component.}$

$\color{red}\textrm{\large Advantages:}$

<ol>
  <li>$\textrm{\large {\color{#708090}Modularity and Simplification} : Layered design breaks down the network into separate parts,making it easier to understand, build, and fix.}$</li>
  <li>$\textrm{\large {\color{#708090}Abstraction and Hierarchy} : Each layer hides complexities and focuses on its specific job, creating a clear structure.}$</li>
  <li>$\textrm{\large {\color{#708090}Interoperability and Standardization} : Layers use common protocols, enabling different devices from different brands to work together smoothly}$</li>
  <li>$\textrm{\large {\color{#708090}Scalability and Flexibility} : Layers can be added or changed independently to accommodate network growth or new technologies.}$</li>
  <li>$\textrm{\large {\color{#708090}Troubleshooting and Debugging} : Issues can be pinpointed to specific layers, simplifying the process of identifying and fixing problems.}$</li>
  <li>$\textrm{\large {\color{#708090}Security and Control} : Layers allow security measures to be implemented at specific levels to protect the network.}$</li>
  <li>$\textrm{\large {\color{#708090}Educational and Documentation Benefits} : Layered design provides an organized way to teach, learn, and communicate about networking concepts.}$</li>
</ol>

#### Layyerd aArchitecture:
-The OSI model.
-The TCP/IP model.


$\textrm{\large Characteristics of OSI model}$
<ul>
<li>$\textrm{OSI stands for open system interconnection}$</li>
<li>$\textrm{It is a model for understanding and desiging a network architecture that is flexible ,robust, and interoperable.}$</li>
<li>$\textrm{Developed by the international standards for organization.}$</li>
<li>$\textrm{The OSI model is not a protocol/}$</li>
</ul>

$\textrm{\large Purpose of  of OSI model}$

$\textrm{\large The purpose of the OSI model is to show how to faciliate comminication between different systems without requiring}$ <br> $\textrm{\large changes to the lagic of the uunderlying hardware and software.}$
#### Layers in OSI model:

| Application layer       |    7th layer        | Away  |
| ------------- |:-------------:| -----:|
| Presentation layer      |6th layer | Pizza |
| Session Layer      | 5th layer      |  Sausage |
| Transport layer | 4th layer      |    Throw |
| Network layer      |3rd layer | Not |
| Data link layer      | 2nd layer      |  Do |
| Physical layer | 1st layer     |    Please |



## Chapter 3:
$\textrm{\large Data must be transfered into signnals,for transmission}

signals->Analog,Digital
![This is an image](https://github.com/whereisfarukk/JavaQuizApplication/blob/main/images/JavaLoginPagesPhot.png)

Signals ->Periodic ,non-periodic
Peak-amplitude:Value of a signal at its highest intennsity.
Unit:Volts.
![This is an image](https://github.com/whereisfarukk/JavaQuizApplication/blob/main/images/JavaLoginPagesPhot.png)
Period:Amounnt of time required by a signal to complete 1 cycle.
Unit:second.
Frequency:No. of period in 1 second .
unit :Hertz.
Phase:Describe the position of a wave relative to time 0.
unit:radian/degree/
wave-length:Distance travel by a signal in 1 cycle.

Composite signal:Combination of single Analog waves.
Band-width:Range of frequencies present in a composite signal.
Digital signals:Digital signals consist of LEVEL.

Bit Rate:Number of bits sent per second.
unit:bits per seconnd.

math:5 pages -> 20 lines ,each line ->15 character,1 character->8 bits
ans:5*20*15*8=12000 bps.

Bit length: Distance occupied by one bit on a transmission method.

Digital signal can be transmitter by ->Baseband transmission->Broadband transmission

i)








IP address:
-An IPv4 addess is a 32 bit address that uniquely and universally defines the conncection of a device ( For example a computer or a router ) to the internet.
-An IPv4 address is a 32 bits long.
-Two devices on the internet can never have the same address at the same time.
-The address space of IPv4 is 2^32 or 4294967296 ( more than 4 billion).
Notations:
-There are two prevalent notations to show on IPv4 address:Binary and dotted decimal notation.
-Binary notation :01110101 10010101 00011101 00000010
Dotted decimal notation:117:149:29:2
Notation of IPv4 address :A:B:C:D(only 4 octates)
0<=A,B,C,d<=255
0.0.0.0 to 255.255.255.255
Converting IP address from binary to decimal:
EX:Convert the IPv4 address from binary to dotted decimal notation.
10000001 00001011 01001011 11101111
129       11         75        239
Converting IP address from decimal to binary:
EX:Converting the IPv4 address from dotted-decimal to binary notation.
145.14.6.8
10010001 00001110 00000110  00001000


|  $.$  |  $First Byte$   | $Second Byte$ | $Third Byte$ | $Fourth Byte$ |
| ------------- |:-------------:|:-------------:|:-------------:| -----:| 
| $Class A$ | $0$ | |  |  | 
| $Class B$ | $1$ |  |  |  |
| $Class C$ | $110$ |  | |  |
| $Class D$ | $1110$ | |  |  |
| $Class E$ | $1111$ | | |   |


|  $.$  |  $First Byte$   | $Second Byte$ | $Third Byte$ | $Fourth Byte$ |
| ------------- |:-------------:|:-------------:|:-------------:| -----:| 
| $Class A$ | $0-127$ | |  |  | 
| $Class B$ | $128-191$ |  |  |  |
| $Class C$ | $192-223$ |  | |  |
| $Class D$ | $224-239$ | |  |  |
| $Class E$ | $240-255$ | | |   |

|  $\textrm{Address classes}$  |  $\textrm{First octet range in decimal}$   | $\textrm{First octet bits}$ <br> $\textrm{{\color{blue}Blue dots do not change}}$ | $\textrm{Network and host portiion}$ | $\textrm{Default mask}$ |$\textrm{Number of possible network and hosts per network}$ |
| ------------- |:-------------:|:-------------:|:-------------:|:-------------:| -----:| 
| $\textrm{Class A}$ | $0-127$ |$\textrm{{\color{blue}0}0000000-{\color{blue}0}1111111}$ |$\textrm{N.H.H.H}$ | $\textrm{255.0.0.0}$|$\textrm{128 nets(27)}$   | 
| $\textrm{Class B}$ | $128-191$ | $\textrm{{\color{blue}10}000000-{\color{blue}10}111111}$ | $\textrm{N.N.H.H}$|$\textrm{255.255.0.0} $ | $\textrm{16,384 nets(214)}$  |
| $\textrm{Class C}$ | $192-223$ | $\textrm{{\color{blue}110}00000-{\color{blue}110}11111}$ |$\textrm{N.N.N.H}$| $\textrm{255.255.255.0}$ | $\textrm{209150 nets(221)}$ |
| $\textrm{Class D}$ | $224-239$ |$\textrm{{\color{blue}1110}0000-{\color{blue}1110}1111}$ | $\textrm{NA (multicast)}$|  $\textrm{-}$ | $\textrm{-}$ |
| $\textrm{Class E}$ | $240-255$ | $\textrm{{\color{blue}1111}0000-{\color{blue}1111}1111}$|$\textrm{NA (Experimantal)}$|  $\textrm{-}$ |  $\textrm{-}$ |


$\textrm{\Large \bf Subnet mask}$

$\textrm{\large A subnet mask is a 32 bits address used to distinguish between a network address and a host address in IP address.}$

<ul>
<li>$\textrm{To define the network and host portion of an address, a device use a separate 32-bit patterns called a subnet mask.}$</li>
<li>$\textrm{The subnet mask does not actually contain the network or host portion of an IPv4 address ,it just says where to look}$ <br> $\textrm{for these portion in the given IPv4 address.}$</li>
</ul>

$\textrm{\Large What is Subnetting?}$

$\textrm{\large Subnetting is the practice of dividing a network into two or smaller networks. It increases routing}$ <br> $\textrm{\large efficiency, which helps to enhance the security of the network and reduces the size of the broadcast domain.}$

$\textrm{\large IP Subnetting designates high-order bits from the host as part of the network prefix. This method divides a}$ <br> $\textrm{\large network into smaller subnets.}$

$\textrm{\large It also helps you to reduce the size of the routing tables, which is stored in routers. This method also}$ <br> $\textrm{\large helps you to extend the existing IP address base and restructures the IP address.}$

  #### Reasons for using Subnetting:
  <ol>
  <li>$\textrm{It helps you to maximise IP addressing efficiency.}$</li>
  <li>$\textrm{Extend the life of IPV4.}$</li>
  <li>$\textrm{Public IPV4 Addresses are scarce.}$</li>
  <li>$\textrm{IPV4 Subnetting reduces network traffic by eliminating collision and broadcast traffic and thus improves overall performance.}$</li>
  <li>$\textrm{Optimized IP network performance.}$</li>
  <li>$\textrm{Facilitates spanning of large geographical distances.}$</li>
  <li>$\textrm{Subnetting process helps to allocate IP addresses that prevent large numbers of IP network addresses from remaining unused.}$</li>
</ol>

$\textrm{\large Ex1:}$

$\textrm{10.10.10.1}$

$\textrm{10.10.20.16}$

$\textrm{subnet musk:255.0.0.0;{\color{green} same N/W}}$


$\textrm{\large Ex2:}$

$\textrm{10.10.10.1}$

$\textrm{10.10.20.16}$

$\textrm{subnet musk:255.255.255.0;{\color{red} different N/W}}$

$\textrm{They need a switch for communication.}$



$\textrm{\large Ex3:}$

$\textrm{172.16.200.1}$

$\textrm{172.16.165.2}$

$\textrm{Subnet mask:255.255.0.0;{\color{green} same N/W}}$

$\star\textrm{\large  We {\color{green}can use} class-C subnet mask for class-A ,class-B,class-C IP address.But for class-C we {\color{red}can't}}$<br>$\textrm{\large  {\color{red}use} class-A or class-B subnet mask.}$



