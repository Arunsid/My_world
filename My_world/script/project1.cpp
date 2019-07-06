#include<gazebo/gazebo.hh>

namespace gazebo
{

class WorldPluginproject : public WorldPlugin
	{
	public:WorldPluginproject() : WorldPlugin()
	{
	  printf("welcome to arun's world!!!!!!\n");
	}

 public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
	{
	}

};

GZ_REGISTER_WORLD_PLUGIN(WorldPluginproject)
}

