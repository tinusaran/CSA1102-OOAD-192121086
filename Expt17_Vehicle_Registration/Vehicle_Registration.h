
#ifndef VEHICLE_REGISTRATION__H
#define VEHICLE_REGISTRATION__H

#include <string>

/**
  * class Vehicle_Registration_
  * 
  */

class Vehicle_Registration_
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Vehicle_Registration_ ();

  /**
   * Empty Destructor
   */
  virtual ~Vehicle_Registration_ ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void Register_Vehicle ()
  {
  }


  /**
   */
  void Get_details_and_verify ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  string Vehicle_details;
  string Owner;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Vehicle_details
   * @param new_var the new value of Vehicle_details
   */
  void setVehicle_details (string new_var)   {
      Vehicle_details = new_var;
  }

  /**
   * Get the value of Vehicle_details
   * @return the value of Vehicle_details
   */
  string getVehicle_details ()   {
    return Vehicle_details;
  }

  /**
   * Set the value of Owner
   * @param new_var the new value of Owner
   */
  void setOwner (string new_var)   {
      Owner = new_var;
  }

  /**
   * Get the value of Owner
   * @return the value of Owner
   */
  string getOwner ()   {
    return Owner;
  }
private:


  void initAttributes () ;

};

#endif // VEHICLE_REGISTRATION__H
