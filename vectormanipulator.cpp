#include <stdio.h>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>

#define GLM_FORCE_RADIANS
#include "glm/vec2.hpp"
#include "glm/vec3.hpp"
#include "glm/mat4x4.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/matrix_inverse.hpp"

glm::vec3
WhatPartOfALivesInBDir( glm::vec3 a, glm::vec3 b )
{
	???
}


glm::vec3
WhatPartOfALivesPerpToB( glm::vec3 a, glm::vec3 b )
{
	???
}


glm::vec3
UnitSurfaceNormal( glm::vec3 q, glm::vec3 r, glm::vec3 s )
{
	 ???
}


float
Area( glm::vec3 q, glm::vec3 r, glm::vec3 s )
{
	 ???
}


bool
IsPointInTriangle( glm::vec3 q, glm::vec3 r, glm::vec3 s, glm::vec3 p )
{
	???
}



float
DistanceFromPointToPlane( glm::vec3 q, glm::vec3 r, glm::vec3 s, glm::vec3 p )
{
	???
}


void
WhoAmI( std::string &yourName, std::string &yourEmailAddress )
{
	yourName = "Joe Graphics";
	yourEmailAddress = "jgraphics@oregonstate.edu" ;
}