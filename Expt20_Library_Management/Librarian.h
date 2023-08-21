
#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>
#include vector



/**
  * class Librarian
  * 
  */

class Librarian
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Librarian ();

  /**
   * Empty Destructor
   */
  virtual ~Librarian ();

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
  void Verify_Librarian ()
  {
  }


  /**
   */
  void search ()
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

  void Name;
  void ID;
  void Password;
  void Searchstring;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }

  /**
   * Set the value of ID
   * @param new_var the new value of ID
   */
  void setID (void new_var)   {
      ID = new_var;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  void getID ()   {
    return ID;
  }

  /**
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (void new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  void getPassword ()   {
    return Password;
  }

  /**
   * Set the value of Searchstring
   * @param new_var the new value of Searchstring
   */
  void setSearchstring (void new_var)   {
      Searchstring = new_var;
  }

  /**
   * Get the value of Searchstring
   * @return the value of Searchstring
   */
  void getSearchstring ()   {
    return Searchstring;
  }
private:


  void initAttributes () ;

};

#endif // LIBRARIAN_H
