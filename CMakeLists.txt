project(score_addon_particles LANGUAGES C CXX)

if(NOT TARGET score_plugin_gfx)
  message("Requires gfx plug-in")
  return()
endif()

# General initialization
score_common_setup()

# Source files
set(HDRS
    Mesh/Executor.hpp
    Mesh/Metadata.hpp
    Mesh/Presenter.hpp
    Mesh/Process.hpp
    Mesh/View.hpp
    Mesh/Layer.hpp

    Particles/ParticleNode.hpp

    3rdparty/icosphere/Icosphere.h

    score_addon_particles.hpp
)

set(SRCS
    Mesh/Executor.cpp
    Mesh/Presenter.cpp
    Mesh/Process.cpp
    Mesh/View.cpp

    Particles/ParticleNode.cpp
    3rdparty/icosphere/Icosphere.cpp

    score_addon_particles.cpp
)


# Creation of the library
add_library(${PROJECT_NAME} ${SRCS} ${HDRS})

# Code generation
score_generate_command_list_file(${PROJECT_NAME} "${HDRS}")

# Link
target_link_libraries(${PROJECT_NAME} PUBLIC
  score_plugin_gfx
)

# Target-specific options
setup_score_plugin(${PROJECT_NAME})

