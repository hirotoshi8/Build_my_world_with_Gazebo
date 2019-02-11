/*
  Overview: This is the welcom message when gazebo is launched.
*/

#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot:public WorldPlugin
  {
  public:WorldPluginMyRobot():WorldPlugin()
    {
      printf("Welcom to hiro's world!\n");
    }
  public:void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
    }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
