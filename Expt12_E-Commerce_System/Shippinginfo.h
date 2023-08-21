
#ifndef SHIPPINGINFO_H
#define SHIPPINGINFO_H

#include <string>

/**
  * class Shippinginfo
  * 
  */

class Shippinginfo
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Shippinginfo ();

  /**
   * Empty Destructor
   */
  virtual ~Shippinginfo ();

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
  void Updateshippiinginfo ()
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

  void Shippingid;
  void Shippingtype;
  void Shippingaddress;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Shippingid
   * @param new_var the new value of Shippingid
   */
  void setShippingid (void new_var)   {
      Shippingid = new_var;
  }

  /**
   * Get the value of Shippingid
   * @return the value of Shippingid
   */
  void getShippingid ()   {
    return Shippingid;
  }

  /**
   * Set the value of Shippingtype
   * @param new_var the new value of Shippingtype
   */
  void setShippingtype (void new_var)   {
      Shippingtype = new_var;
  }

  /**
   * Get the value of Shippingtype
   * @return the value of Shippingtype
   */
  void getShippingtype ()   {
    return Shippingtype;
  }

  /**
   * Set the value of Shippingaddress
   * @param new_var the new value of Shippingaddress
   */
  void setShippingaddress (void new_var)   {
      Shippingaddress = new_var;
  }

  /**
   * Get the value of Shippingaddress
   * @return the value of Shippingaddress
   */
  void getShippingaddress ()   {
    return Shippingaddress;
  }
private:


  void initAttributes () ;

};

#endif // SHIPPINGINFO_H
