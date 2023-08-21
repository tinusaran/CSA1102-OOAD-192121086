
#ifndef TRANCEIVER_H
#define TRANCEIVER_H

#include <string>

/**
  * class Tranceiver
  * 
  */

class Tranceiver
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Tranceiver ();

  /**
   * Empty Destructor
   */
  virtual ~Tranceiver ();

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
  void Receive_command ()
  {
  }


  /**
   */
  void Send_alert ()
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

  string Alert_msg;
  string Command;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Alert_msg
   * @param new_var the new value of Alert_msg
   */
  void setAlert_msg (string new_var)   {
      Alert_msg = new_var;
  }

  /**
   * Get the value of Alert_msg
   * @return the value of Alert_msg
   */
  string getAlert_msg ()   {
    return Alert_msg;
  }

  /**
   * Set the value of Command
   * @param new_var the new value of Command
   */
  void setCommand (string new_var)   {
      Command = new_var;
  }

  /**
   * Get the value of Command
   * @return the value of Command
   */
  string getCommand ()   {
    return Command;
  }
private:


  void initAttributes () ;

};

#endif // TRANCEIVER_H
