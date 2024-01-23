// Copyright (c) 2024 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include "carla/sensor/Deserializer.h"

#include "carla/sensor/SensorRegistry.h"

namespace carla {
namespace sensor {

  SharedPtr<SensorData> Deserializer::Deserialize(Buffer &&buffer) {
    return SensorRegistry::Deserialize(std::move(buffer));
  }

} // namespace sensor
} // namespace carla
