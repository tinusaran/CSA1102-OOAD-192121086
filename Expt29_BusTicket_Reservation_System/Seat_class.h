
#ifndef SEAT_CLASS_H
#define SEAT_CLASS_H

#include <string>

/**
  * class Seat_class
  * 
  */

class Seat_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Seat_class ();

  /**
   * Empty Destructor
   */
  virtual ~Seat_class ();

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
  void Add_Seat ()
  {
  }


  /**
   */
  void Edit_Seat ()
  {
  }


  /**
   */
  void Delete_Seat ()
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

  void Seat_Id;
  void Seat_bus_Id;
  void Customer_Id_;
  void Seat_number;
  void Seat_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Seat_Id
   * @param new_var the new value of Seat_Id
   */
  void setSeat_Id (void new_var)   {
      Seat_Id = new_var;
  }

  /**
   * Get the value of Seat_Id
   * @return the value of Seat_Id
   */
  void getSeat_Id ()   {
    return Seat_Id;
  }

  /**
   * Set the value of Seat_bus_Id
   * @param new_var the new value of Seat_bus_Id
   */
  void setSeat_bus_Id (void new_var)   {
      Seat_bus_Id = new_var;
  }

  /**
   * Get the value of Seat_bus_Id
   * @return the value of Seat_bus_Id
   */
  void getSeat_bus_Id ()   {
    return Seat_bus_Id;
  }

  /**
   * Set the value of Customer_Id_
   * @param new_var the new value of Customer_Id_
   */
  void setCustomer_Id_ (void new_var)   {
      Customer_Id_ = new_var;
  }

  /**
   * Get the value of Customer_Id_
   * @return the value of Customer_Id_
   */
  void getCustomer_Id_ ()   {
    return Customer_Id_;
  }

  /**
   * Set the value of Seat_number
   * @param new_var the new value of Seat_number
   */
  void setSeat_number (void new_var)   {
      Seat_number = new_var;
  }

  /**
   * Get the value of Seat_number
   * @return the value of Seat_number
   */
  void getSeat_number ()   {
    return Seat_number;
  }

  /**
   * Set the value of Seat_type
   * @param new_var the new value of Seat_type
   */
  void setSeat_type (void new_var)   {
      Seat_type = new_var;
  }

  /**
   * Get the value of Seat_type
   * @return the value of Seat_type
   */
  void getSeat_type ()   {
    return Seat_type;
  }
private:


  void initAttributes () ;

};

#endif // SEAT_CLASS_H
