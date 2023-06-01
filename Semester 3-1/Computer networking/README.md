
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

$\textrm{\large Advantages:}$

<ol>
  <li>$\textrm{\large Modularity and Simplification:Layered design breaks down the network into separate parts,making it easier to understand, build, and fix.}$</li>
  <li>$\textrm{\large Abstraction and Hierarchy:Each layer hides complexities and focuses on its specific job, creating a clear structure.}$</li>
  <li>$\textrm{\large Interoperability and Standardization:Layers use common protocols, enabling different devices from different brands to work together smoothly}$</li>
  <li>$\textrm{\large Scalability and Flexibility: Layers can be added or changed independently to accommodate network growth or new technologies.}$</li>
  <li>$\textrm{\large Troubleshooting and Debugging:Issues can be pinpointed to specific layers, simplifying the process of identifying and fixing problems.}$</li>
  <li>$\textrm{\large Security and Control:Layers allow security measures to be implemented at specific levels to protect the network.}$</li>
  <li>$\textrm{\large Educational and Documentation Benefits:Layered design provides an organized way to teach, learn, and communicate about networking concepts.}$</li>
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




