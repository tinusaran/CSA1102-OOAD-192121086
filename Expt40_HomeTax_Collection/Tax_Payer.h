
#ifndef TAX_PAYER_H
#define TAX_PAYER_H

#include <string>

/**
  * class Tax_Payer
  * 
  */

class Tax_Payer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Tax_Payer ();

  /**
   * Empty Destructor
   */
  virtual ~Tax_Payer ();

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
  void Make_Payment ()
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

  int Id;
  string Name;
  string Address;
  string Email;
  number Phone;
  string Properties;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Id
   * @param new_var the new value of Id
   */
  void setId (int new_var)   {
      Id = new_var;
  }

  /**
   * Get the value of Id
   * @return the value of Id
   */
  int getId ()   {
    return Id;
  }

  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (string new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  string getName ()   {
    return Name;
  }

  /**
   * Set the value of Address
   * @param new_var the new value of Address
   */
  void setAddress (string new_var)   {
      Address = new_var;
  }

  /**
   * Get the value of Address
   * @return the value of Address
   */
  string getAddress ()   {
    return Address;
  }

  /**
   * Set the value of Email
   * @param new_var the new value of Email
   */
  void setEmail (string new_var)   {
      Email = new_var;
  }

  /**
   * Get the value of Email
   * @return the value of Email
   */
  string getEmail ()   {
    return Email;
  }

  /**
   * Set the value of Phone
   * @param new_var the new value of Phone
   */
  void setPhone (number new_var)   {
      Phone = new_var;
  }

  /**
   * Get the value of Phone
   * @return the value of Phone
   */
  number getPhone ()   {
    return Phone;
  }

  /**
   * Set the value of Properties
   * @param new_var the new value of Properties
   */
  void setProperties (string new_var)   {
      Properties = new_var;
  }

  /**
   * Get the value of Properties
   * @return the value of Properties
   */
  string getProperties ()   {
    return Properties;
  }
private:


  void initAttributes () ;

};

#endif // TAX_PAYER_H
