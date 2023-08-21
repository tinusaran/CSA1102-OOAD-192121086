
#ifndef MEDICINES_CLASS_H
#define MEDICINES_CLASS_H

#include <string>

/**
  * class Medicines_class
  * 
  */

class Medicines_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Medicines_class ();

  /**
   * Empty Destructor
   */
  virtual ~Medicines_class ();

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
  void add_medicines ()
  {
  }


  /**
   */
  void Edit_Medicines ()
  {
  }


  /**
   */
  void Search_medicines ()
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

  void Medicine_Id;
  void Medicine_Name;
  void Medicines_company;
  void Medicine_cost;
  void Medicine_Type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Medicine_Id
   * @param new_var the new value of Medicine_Id
   */
  void setMedicine_Id (void new_var)   {
      Medicine_Id = new_var;
  }

  /**
   * Get the value of Medicine_Id
   * @return the value of Medicine_Id
   */
  void getMedicine_Id ()   {
    return Medicine_Id;
  }

  /**
   * Set the value of Medicine_Name
   * @param new_var the new value of Medicine_Name
   */
  void setMedicine_Name (void new_var)   {
      Medicine_Name = new_var;
  }

  /**
   * Get the value of Medicine_Name
   * @return the value of Medicine_Name
   */
  void getMedicine_Name ()   {
    return Medicine_Name;
  }

  /**
   * Set the value of Medicines_company
   * @param new_var the new value of Medicines_company
   */
  void setMedicines_company (void new_var)   {
      Medicines_company = new_var;
  }

  /**
   * Get the value of Medicines_company
   * @return the value of Medicines_company
   */
  void getMedicines_company ()   {
    return Medicines_company;
  }

  /**
   * Set the value of Medicine_cost
   * @param new_var the new value of Medicine_cost
   */
  void setMedicine_cost (void new_var)   {
      Medicine_cost = new_var;
  }

  /**
   * Get the value of Medicine_cost
   * @return the value of Medicine_cost
   */
  void getMedicine_cost ()   {
    return Medicine_cost;
  }

  /**
   * Set the value of Medicine_Type
   * @param new_var the new value of Medicine_Type
   */
  void setMedicine_Type (void new_var)   {
      Medicine_Type = new_var;
  }

  /**
   * Get the value of Medicine_Type
   * @return the value of Medicine_Type
   */
  void getMedicine_Type ()   {
    return Medicine_Type;
  }
private:


  void initAttributes () ;

};

#endif // MEDICINES_CLASS_H
