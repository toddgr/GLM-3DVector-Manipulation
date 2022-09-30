/* 	Grace Todd
	CS 491: Simulation and Game Programming
	Fall 2022

	Project 1: Using GLM to manipulate 3D Vectors
	To Compile: g++ -o proj1 proj01.cpp
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
	// How much of vector a lives in the direction of vector b?
	glm::vec3 c;
	
	// Unitize B vector
	glm::vec3 unitBVector = glm::normalize(b);

	float dotProduct = glm::dot(a, unitBVector);
	c = dotProduct * unitBVector;

	return c;
}


glm::vec3
WhatPartOfALivesPerpToB( glm::vec3 a, glm::vec3 b )
{
	// How much of vector a lives perpendicular to the b direction?
	// We can do this by taking the vector resulting from WhatPartOfALivesInBDir
	// and then subtract it from vector A.

	glm::vec3 c = WhatPartOfALivesInBDir(a, b);
	c -= a;

	return c;
}


glm::vec3
UnitSurfaceNormal( glm::vec3 q, glm::vec3 r, glm::vec3 s )
{	
	// Finds the vector perpendicular to a plane created by the points q, r, s
	// n = (R - Q) X (S - Q)

	glm::vec3 n;
	glm::vec3 vectorA = r - q;
	glm::vec3 vectorB = s - q;
	n = glm::cross(vectorA, vectorB);
	
	// Unitize normal
	n = glm::normalize(n);

	return n;
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
	glm::vec3 a;
	glm::vec3 b;
	glm::vec3 c;
	
	printf("---WhatPartOfALivesInBDir---\n");
	a = glm::vec3(1, 2, 3);
	b = glm::vec3(4, -5, 6);
	c = WhatPartOfALivesInBDir(a, b);
	printf("a = < %7.2f %7.2f %7.2f>, b = <%7.2f %7.2f %7.2f>\n", a[0], a[1], a[2], b[0], b[1], b[2]);
	printf("c = <%7.2f %7.2f %7.2f>\n\n", c[0], c[1], c[2]);

	printf("---WhatPartOfALivesPerpToB---\n");
	a = glm::vec3(1, 2, 3);
	b = glm::vec3(4, -5, 6);
	c = WhatPartOfALivesPerpToB(a, b);
	printf("a = < %7.2f %7.2f %7.2f>, b = <%7.2f %7.2f %7.2f>\n", a[0], a[1], a[2], b[0], b[1], b[2]);
	printf("c = <%7.2f %7.2f %7.2f>\n", c[0], c[1], c[2]);
}