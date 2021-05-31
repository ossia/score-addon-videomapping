#pragma once
#include <Process/GenericProcessFactory.hpp>

#include <Mesh/Presenter.hpp>
#include <Mesh/Process.hpp>
#include <Mesh/View.hpp>

namespace Particles::Mesh
{
using LayerFactory
    = Process::LayerFactory_T<Particles::Mesh::Model, Particles::Mesh::Presenter, Particles::Mesh::View>;
}
