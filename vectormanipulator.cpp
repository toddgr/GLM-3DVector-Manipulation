/* 	Grace Todd
	CS 491: Simulation and Game Programming
	Fall 2022

	Project 1: Using GLM to manipulate 3D Vectors
	To Compile: g++ -o proj1 vectormanipulator.cpp
				./proj1
*/

/********************************
			HEADER FILES
	(Comment out for submission)
*********************************/

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
	glm::vec3 c;
	return c;
}


glm::vec3
WhatPartOfALivesPerpToB( glm::vec3 a, glm::vec3 b )
{
	glm::vec3 c;
	return c;
}


glm::vec3
UnitSurfaceNormal( glm::vec3 q, glm::vec3 r, glm::vec3 s )
{
	glm::vec3 t;
	return t;
}


float
Area( glm::vec3 q, glm::vec3 r, glm::vec3 s )
{
	float area;
	return area;
}


bool
IsPointInTriangle( glm::vec3 q, glm::vec3 r, glm::vec3 s, glm::vec3 p )
{
	return true;
}



float
DistanceFromPointToPlane( glm::vec3 q, glm::vec3 r, glm::vec3 s, glm::vec3 p )
{
	float distance;
	return distance;
}


void
WhoAmI( std::string &yourName, std::string &yourEmailAddress )
{
	yourName = "Grace Todd";
	yourEmailAddress = "toddgr@oregonstate.edu" ;
}


/*******************************
			MAIN PROGRAM
	(Comment out for submission)
********************************/
int
main() {
	printf("Main works :P\n");
	return 0;
}