#include "repository/ObjectRepository.h"
#include "connection/InternalConnection.h"

class InternalRepository : public ObjectRepository, InternalConnection
{
	public:
		// Manual constructor.
		InternalRepository();

		// Autorun AI constructors: Connects to the cluster and subscribes to the channel argument.
		InternalRepository(channel_t channel);
		InternalRepository(channel_t channel, std::string addr, uint16_t port);

		// Autorun object constructor: Attaches the object argument, connects to the cluster,
		//                             and subscribes to the object's id.
		InternalRepository(DistributedObject* object);
		InternalRepository(DistributedObject* object, std::string addr, uint16_t port);

		// attach_object adds a locally hosted object to the repository.
		//     Typically this is called when hosting an UberDOG.
		void attach_object(DistributedObject* object);

		// attach_object_view subscribes to a remotely hosted object with view argument.
		//     Typically this is used to listen to an UberDOG.
		void attach_object_view(DistributedObject view);

		// create_distributed_view creates a stateserver object initialized from the view argument.
		void create_distributed_view(DistributedObject view);

	private:
		void handle_object_entry(...);
};
