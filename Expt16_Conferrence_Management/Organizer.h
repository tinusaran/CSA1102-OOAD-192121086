
#ifndef ORGANIZER_H
#define ORGANIZER_H

#include <string>

/**
  * class Organizer
  * 
  */

class Organizer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Organizer ();

  /**
   * Empty Destructor
   */
  virtual ~Organizer ();

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
  void Allocating_the_seats ()
  {
  }


  /**
   */
  void Inviting_the_delegates ()
  {
  }


  /**
   */
  void choosing_the_winner ()
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

  void Member_details;
  void Function_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Member_details
   * @param new_var the new value of Member_details
   */
  void setMember_details (void new_var)   {
      Member_details = new_var;
  }

  /**
   * Get the value of Member_details
   * @return the value of Member_details
   */
  void getMember_details ()   {
    return Member_details;
  }

  /**
   * Set the value of Function_details
   * @param new_var the new value of Function_details
   */
  void setFunction_details (void new_var)   {
      Function_details = new_var;
  }

  /**
   * Get the value of Function_details
   * @return the value of Function_details
   */
  void getFunction_details ()   {
    return Function_details;
  }
private:


  void initAttributes () ;

};

#endif // ORGANIZER_H
