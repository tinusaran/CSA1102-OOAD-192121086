
#ifndef REPORT_H
#define REPORT_H

#include <string>

/**
  * class Report
  * 
  */

class Report
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Report ();

  /**
   * Empty Destructor
   */
  virtual ~Report ();

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
  void getReport ()
  {
  }


  /**
   */
  void getFeedback ()
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

  string Report_Inconvinence;
  string Feedback;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Report_Inconvinence
   * @param new_var the new value of Report_Inconvinence
   */
  void setReport_Inconvinence (string new_var)   {
      Report_Inconvinence = new_var;
  }

  /**
   * Get the value of Report_Inconvinence
   * @return the value of Report_Inconvinence
   */
  string getReport_Inconvinence ()   {
    return Report_Inconvinence;
  }

  /**
   * Set the value of Feedback
   * @param new_var the new value of Feedback
   */
  void setFeedback (string new_var)   {
      Feedback = new_var;
  }

  /**
   * Get the value of Feedback
   * @return the value of Feedback
   */
  string getFeedback ()   {
    return Feedback;
  }
private:


  void initAttributes () ;

};

#endif // REPORT_H
