#ifndef TARGLISTLIB_GLOBAL_H
#define TARGLISTLIB_GLOBAL_H

#include <QtCore/QtGlobal>

#ifdef TARGLISTLIB
#define TARGLIST_EXPORT Q_DECL_EXPORT
#else
#define TARGLIST_EXPORT Q_DECL_IMPORT
#endif

#endif // TARGLISTLIB_GLOBAL_H
