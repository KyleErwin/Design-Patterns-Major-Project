/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

/**
*		@file Bludgeoning.h
*		@class Bludgeoning
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that stores units of the Bludgeoning type and also
*		acts as the Concrete Prototype in the Prototype design pattern.
*
*		@section Description
*		This class provides access to the attribules of all the Bludgeoning units
*		and access to clone them.
*
*/
#ifndef BLUDGEONING_H
#define BLUDGEONING_H

#include "Unit.h"

using namespace std;

class Bludgeoning : public Unit
{
	private:
		//Observer
		string state;

	public:
		/**
		*		The constructor creates an instance of the class.
		*		@param int passes the health of the Bludgeoning object.
		*		@param int passes the damage that the Bludgeoning object causes.
		*/
		Bludgeoning(int, int); 	//Health, damage

		/**
		*		The function returns the type of unit that it is.
		*/
		virtual string getUnit();

		/**
		*		The function returns the type of sublass that the unit is.
		*/
		virtual string getSubClass();

		/**
		* 	The function returns the type of skill that the unit is.
		*/
		virtual string getSkill();
		int attack(Unit*);

		/**
		*		The function uses the prototype design pattern to clone the current unit
		* 	and returns a pointer to a Bludgeoning object.
		*/
		virtual Bludgeoning* clone();


		/**
		*		This function uses the observer design pattern to update all the relevent subjects
		*/
		void update();

		/*
		*		This function sets the name of the unit.
		*		@param name is the name of the unit.
		*/
		virtual void setName(string _name) { name = _name; };

		/*
		*		This function returns the units name.
		*/
		virtual string getName() { return name; };

		//Mediator
		/*
		*		this function is for the mediator design pattern initaites an event.
		*/
		virtual string event();

		/*
		*		This function is for the mediator dsign pattern and initiates an action
		*		on units.
		*/
		virtual void act();
};

/**
*		@file Bludgeoning.h
* 	@class Soldier
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that provides a soldier for Bludgeoning
*
*		@section Description
*		This class provides the initialisation for the soldier for the Bludgeoning type of Unit.
*/

class Soldier : public Bludgeoning
{
	public:
		/**
		*		The health and damage numbers are pre-known and are as such passed to
		*		the constructor.
		*		The sublass and unit variables are also initialised to their respective
		*		values.
		*/
		Soldier() :Bludgeoning(100, 8)
		{
			subClass = "Soldier";
			unit = "Player";
		}
};


/**
*		@file Bludgeoning.h
* 	@class Ogre
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that provides an Ogre for Bludgeoning
*
*		@section Description
*		This class provides the initialisation for the Ogre for the Bludgeoning type of Unit.
*/
class Ogre : public Bludgeoning
{
	public:
		/**
		*		The health and damage numbers are pre-known and are as such passed to
		*		the constructor.
		*		The sublass and unit variables are also initialised to their respective
		*		values.
		*/
		Ogre() :Bludgeoning(120, 5)
		{
			subClass = "Ogre";
			unit = "Monster";
		}
};

#endif
