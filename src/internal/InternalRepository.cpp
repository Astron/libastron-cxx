#include "InternalRepository.h"
namespace astron // open namespace
{


// Manual constructor.
InternalRepository::InternalRepository(): ObjectRepository(), InternalConnection()
{

}

// Auto-connect constructor: Connects to the cluster with the given addr and port
InternalRepository::InternalRepository(std::string addr, uint16_t port): ObjectRepository(),
	InternalConnection()
{
	InternalConnection::connect(addr, port);

}

// Auto-connect as object: Attaches the object argument, connects to the cluster,
//                         and subscribes to the object's id.
InternalRepository::InternalRepository(DistributedObject* object): ObjectRepository(),
	InternalConnection()
{

}

InternalRepository::InternalRepository(DistributedObject* object, std::string addr,
                                       uint16_t port): ObjectRepository(), InternalConnection()
{

}

// poll_forever blocks forever and processes datagrams as they come in
void InternalRepository::poll_forever()
{

}

// poll_till_empty receives datagrams from the cluster until the receive buffer is empty.
void InternalRepository::poll_till_empty()
{

}
//void poll_till_empty(timeout);

// attach_object adds a locally hosted object to the repository.
//     Typically this is called when hosting an UberDOG.
void InternalRepository::attach_object(DistributedObject* object)
{

}

// attach_object_view subscribes to a remotely hosted object with view argument.
//     Typically this is used to listen to an UberDOG.
void InternalRepository::attach_object_view(DistributedObject* view)
{

}

void InternalRepository::handle_object_entry(...)
{

}


} // close astron namespace
