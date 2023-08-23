
#ifndef SERVICE_H
#define SERVICE_H

#include <string>

/**
  * class Service
  * 
  */

class Service
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Service ();

  /**
   * Empty Destructor
   */
  virtual ~Service ();

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

  void Id;
  void Name;
  void Description;
  void Price;
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
  void setId (void new_var)   {
      Id = new_var;
  }

  /**
   * Get the value of Id
   * @return the value of Id
   */
  void getId ()   {
    return Id;
  }

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
   * Set the value of Description
   * @param new_var the new value of Description
   */
  void setDescription (void new_var)   {
      Description = new_var;
  }

  /**
   * Get the value of Description
   * @return the value of Description
   */
  void getDescription ()   {
    return Description;
  }

  /**
   * Set the value of Price
   * @param new_var the new value of Price
   */
  void setPrice (void new_var)   {
      Price = new_var;
  }

  /**
   * Get the value of Price
   * @return the value of Price
   */
  void getPrice ()   {
    return Price;
  }
private:


  void initAttributes () ;

};

#endif // SERVICE_H
