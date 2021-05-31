#pragma once
#include <score/application/ApplicationContext.hpp>
#include <score/command/Command.hpp>
#include <score/command/CommandGeneratorMap.hpp>
#include <score/plugins/InterfaceList.hpp>
#include <score/plugins/qt_interfaces/CommandFactory_QtInterface.hpp>
#include <score/plugins/qt_interfaces/FactoryFamily_QtInterface.hpp>
#include <score/plugins/qt_interfaces/FactoryInterface_QtInterface.hpp>
#include <score/plugins/qt_interfaces/GUIApplicationPlugin_QtInterface.hpp>
#include <score/plugins/qt_interfaces/PluginRequirements_QtInterface.hpp>

#include <utility>
#include <vector>

class score_addon_particles final : public score::Plugin_QtInterface,
                              public score::FactoryInterface_QtInterface
{
  SCORE_PLUGIN_METADATA(1, "0a0d34e4-d5f2-4920-9539-47fdb11e3a1c")

public:
  score_addon_particles();
  ~score_addon_particles() override;

private:

  std::vector<std::unique_ptr<score::InterfaceBase>>
  factories(const score::ApplicationContext& ctx, const score::InterfaceKey& key) const override;

  std::vector<score::PluginKey> required() const override;
};
