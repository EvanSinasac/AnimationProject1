#pragma once
//Just trying this to see if I can clean up theMain a little
//common glm includes that usually need to all be included at the same time anyways

#define GLM_ENABLE_EXPERIMENTAL  // for euler_angles.hpp

#include <glm/glm.hpp>
#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4
#include <glm/gtc/matrix_transform.hpp> 
// glm::translate, glm::rotate, glm::scale, glm::perspective
#include <glm/gtc/type_ptr.hpp> // glm::value_ptr


#include <glm/gtx/rotate_vector.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtx/euler_angles.hpp>
//#include <glm/gtx/projection.hpp>
//#include <glm/gtx/matrix_interpolation.hpp>

// glm extensions
//#include <glm/ext/matrix_transform.hpp>  // glm::translate, glm::rotate, glm::scale
//#include <glm/ext/matrix_clip_space.hpp> // glm::perspective
//#include <glm/ext/scalar_constants.hpp>  // glm::pi, glm::epsilon

// personal glm "extensions"
#include <glm/james/mat4stack.h>
#include <glm/james/inline_helpers.h>
#include <glm/james/aabb.h>
#include <glm/james/rotation_from_to.h>


// FreeImage
//#ifndef FREEIMAGE_LIB
//#define FREEIMAGE_LIB
//#endif // !FREEIMAGE_LIB
//
//#include <FreeImage.h>