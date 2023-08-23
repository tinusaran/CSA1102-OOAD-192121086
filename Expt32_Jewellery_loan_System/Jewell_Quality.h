
#ifndef JEWELL_QUALITY_H
#define JEWELL_QUALITY_H

#include <string>

/**
  * class Jewell_Quality
  * 
  */

class Jewell_Quality
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Jewell_Quality ();

  /**
   * Empty Destructor
   */
  virtual ~Jewell_Quality ();

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
  void Check_Jewell_Quality ()
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

  void High_grade;
  void Damaged;
  void Slightly_Damaged;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of High_grade
   * @param new_var the new value of High_grade
   */
  void setHigh_grade (void new_var)   {
      High_grade = new_var;
  }

  /**
   * Get the value of High_grade
   * @return the value of High_grade
   */
  void getHigh_grade ()   {
    return High_grade;
  }

  /**
   * Set the value of Damaged
   * @param new_var the new value of Damaged
   */
  void setDamaged (void new_var)   {
      Damaged = new_var;
  }

  /**
   * Get the value of Damaged
   * @return the value of Damaged
   */
  void getDamaged ()   {
    return Damaged;
  }

  /**
   * Set the value of Slightly_Damaged
   * @param new_var the new value of Slightly_Damaged
   */
  void setSlightly_Damaged (void new_var)   {
      Slightly_Damaged = new_var;
  }

  /**
   * Get the value of Slightly_Damaged
   * @return the value of Slightly_Damaged
   */
  void getSlightly_Damaged ()   {
    return Slightly_Damaged;
  }
private:


  void initAttributes () ;

};

#endif // JEWELL_QUALITY_H
