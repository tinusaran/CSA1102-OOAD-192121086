
#ifndef CLIENT_H
#define CLIENT_H

#include <string>

/**
  * class Client
  * 
  */

class Client
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Client ();

  /**
   * Empty Destructor
   */
  virtual ~Client ();

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
  void Sign_in ()
  {
  }


  /**
   */
  void Sign_Out ()
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

  string Client_Name;
  int Id;
  string Password;
  number Phone;
  string Address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Client_Name
   * @param new_var the new value of Client_Name
   */
  void setClient_Name (string new_var)   {
      Client_Name = new_var;
  }

  /**
   * Get the value of Client_Name
   * @return the value of Client_Name
   */
  string getClient_Name ()   {
    return Client_Name;
  }

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
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (string new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  string getPassword ()   {
    return Password;
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
private:


  void initAttributes () ;

};

#endif // CLIENT_H
