/*==============================================================================

  Program: 3D Slicer

  Copyright (c) 2010 Kitware Inc.

  See Doc/copyright/copyright.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// Qt includes
#include <QApplication>
#include <QTimer>

// SlicerQt includes
#include "qSlicerAboutDialog.h"

// STD includes
#include <cstdlib>

int qSlicerAboutDialogTest1(int argc, char * argv[] )
{
  QApplication app(argc, argv);

  qSlicerAboutDialog about;

  if (argc < 2 || QString(argv[1]) != "-I")
    {
    QTimer::singleShot(100, qApp, SLOT(quit()));
    }

  return about.exec();
}

