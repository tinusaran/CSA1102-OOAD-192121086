
#ifndef CONFERENCE_MANAGEMENT_H
#define CONFERENCE_MANAGEMENT_H

#include <string>

/**
  * class Conference_management
  * 
  */

class Conference_management
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Conference_management ();

  /**
   * Empty Destructor
   */
  virtual ~Conference_management ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void Member_Details;
  void Manager_Details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Member_Details
   * @param new_var the new value of Member_Details
   */
  void setMember_Details (void new_var)   {
      Member_Details = new_var;
  }

  /**
   * Get the value of Member_Details
   * @return the value of Member_Details
   */
  void getMember_Details ()   {
    return Member_Details;
  }

  /**
   * Set the value of Manager_Details
   * @param new_var the new value of Manager_Details
   */
  void setManager_Details (void new_var)   {
      Manager_Details = new_var;
  }

  /**
   * Get the value of Manager_Details
   * @return the value of Manager_Details
   */
  void getManager_Details ()   {
    return Manager_Details;
  }
private:


  void initAttributes () ;

};

#endif // CONFERENCE_MANAGEMENT_H
