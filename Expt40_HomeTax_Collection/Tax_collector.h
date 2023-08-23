
#ifndef TAX_COLLECTOR_H
#define TAX_COLLECTOR_H

#include <string>

/**
  * class Tax_collector
  * 
  */

class Tax_collector
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Tax_collector ();

  /**
   * Empty Destructor
   */
  virtual ~Tax_collector ();

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
  void Collect_Tax ()
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

  void Id;
  void Name;
  void jurisdiction;
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
   * Set the value of jurisdiction
   * @param new_var the new value of jurisdiction
   */
  void setJurisdiction (void new_var)   {
      jurisdiction = new_var;
  }

  /**
   * Get the value of jurisdiction
   * @return the value of jurisdiction
   */
  void getJurisdiction ()   {
    return jurisdiction;
  }
private:


  void initAttributes () ;

};

#endif // TAX_COLLECTOR_H
