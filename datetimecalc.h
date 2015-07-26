//******************************************************************************
//
// FILE NAME: datetimecalc.h
//
// DESCRIPTION:
//  Code for time and data calculation class.
//
// AUTHOR: James P. Parziale
//
// DATE CREATED: 02/16/2009
//
// This file may be distributed under the terms of the GNU Public License.
//
//******************************************************************************
// HISTORY:
// 00 02/16/2009
//    Original version
//******************************************************************************

#include <stdio.h>

#ifndef DATETIMECALC_H
#define DATETIMECALC_H

#include <QtWidgets/QMainWindow>
#include "ui_datetimecalc.h"

//******************************************************************************

/**
 * Time and Date calculation main window widget.
 */
class DateTimeCalc: public QMainWindow {
Q_OBJECT

public:

  /**
   * Constructor for the aplication's main dialog box.
   * @param parent Pointer to the parent widget.
   */
  DateTimeCalc(QWidget *parent = 0);

  ~DateTimeCalc();

private slots:
  void on_actionAbout_triggered();
  void on_aboutButton_clicked();

  void on_timeNowButton_clicked();
  void on_timeOffsetNowButton_clicked();
  void on_timePlusRadioButton_clicked();
  void on_timeMinusRadioButton_clicked();
  void on_timeCalcButton_clicked();

  void on_dateTodayButton_clicked();
  void on_datePlusRadioButton_clicked();
  void on_dateMinusRadioButton_clicked();
  void on_dateCalcButton_clicked();

  void on_dateRefTodayButton_clicked();
  void on_dateTargetTodayButton_clicked();
  void on_dateDiffCalcButton_clicked();

private:
  Ui::MainWindow ui;

  QTime timeResult;

  // -------------------------------------------------------------------------

  /**
   * Enumeration that describes the type of operation being performed.
   */
  enum TimeDateOp {
    Invalid, Add, Subtract
  };
  /// The operation being performed on two times.
  TimeDateOp timeOp;
  /// The operation being performed on two dates.
  TimeDateOp dateOp;

  // -------------------------------------------------------------------------

  void SetTimeResultText();

  // -------------------------------------------------------------------------

  TimeDateOp GetTimeOp();
  TimeDateOp GetDateOp();

  // -------------------------------------------------------------------------
};

//******************************************************************************
#endif // DATETIMECALC_H
