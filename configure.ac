# Source of configuration for EJDB Java Binding


#================================================================
# Generic Settings
#================================================================

test -n "$CFLAGS" && MYCFLAGS="$CFLAGS $MYCFLAGS"
test -n "$CPPFLAGS" && MYCPPFLAGS="$CPPFLAGS $MYCPPFLAGS"
test -n "$LDFLAGS" && MYLDFLAGS="$LDFLAGS $MYLDFLAGS"

AC_INIT(jejdb, 1.0.2)
MYLIBVER=1
MYLIBREV=0

AC_PREFIX_DEFAULT(/usr)

# Targets
MYLIBRARYFILES=""

# Building flags
MYCFLAGS="$MYCFLAGS -std=c99 -Wall -fPIC -fsigned-char -O2"
MYCPPFLAGS="-I. -I\$(INCLUDEDIR)"
MYCPPFLAGS="$MYCPPFLAGS -D_UNICODE -DNDEBUG -D_GNU_SOURCE=1 -D_REENTRANT -D__EXTENSIONS__"
MYLDFLAGS="-L. -L\$(LIBDIR)"

# Messages
printf '#================================================================\n'
printf '# Configuring EJDB Java Binding version %s.\n' "$PACKAGE_VERSION"
printf '#================================================================\n'

#================================================================
# Checking Commands and Libraries
#================================================================

# C compiler
AC_PROG_CC

# Checks for libraries.
AC_CHECK_LIB([c], main)
AC_CHECK_LIB([tcejdb], main)
AC_CHECK_HEADERS([tcejdb/ejdb.h tcejdb/ejdb_private.h], true, AC_MSG_ERROR([tcejdb/ejdb.h is required]))
AC_CHECK_PROG(has_ant, [ant], true)

if test -z $has_ant
then
	AC_MSG_ERROR([Apache ant build tool is required])
fi


#================================================================
# Options
#================================================================

# Internal variables
enables=""

# Disable shared object
AC_ARG_ENABLE(shared,
  AC_HELP_STRING([--disable-shared], [avoid to build shared libraries]))
if test "$enable_shared" = "no"
then
  enables="$enables (no-shared)"
else 
  MYLIBRARYFILES="$MYLIBRARYFILES libjejdb.so.$MYLIBVER.$MYLIBREV.0"
  MYLIBRARYFILES="$MYLIBRARYFILES libjejdb.so.$MYLIBVER"
  MYLIBRARYFILES="$MYLIBRARYFILES libjejdb.so"
fi

AC_ARG_WITH(jdk,
  AC_HELP_STRING([--with-jdk=DIR], [use the specified JDK home]))  
if test -n "$with_jdk"
then
  JDK_HOME="$with_jdk"
fi

if test -z "$JDK_HOME"  
then
  AC_MSG_ERROR([Please specify valid JDK path with --with-jdk option or set JDK_HOME env])	  
else 
  MYCPPFLAGS="$MYCPPFLAGS -I$JDK_HOME/include -I$JDK_HOME/include/linux"  
  enables="$enables (jdk=$JDK_HOME)"
fi


#================================================================
# Generic Settings
#================================================================

# Export variables
AC_SUBST(MYLIBVER)
AC_SUBST(MYLIBREV)
AC_SUBST(MYFORMATVER)

AC_SUBST(MYLIBRARYFILES)

AC_SUBST(MYCFLAGS)
AC_SUBST(MYCPPFLAGS)
AC_SUBST(MYLDFLAGS)
AC_SUBST(PACKAGE_NAME)
AC_SUBST(PACKAGE_VERSION)

# Targets
AC_OUTPUT(Makefile)
AC_OUTPUT(build.properties)

# Messages
printf '#================================================================\n'
printf '# Ready to make ejdb-java version %s%s.\n' "$PACKAGE_VERSION" "$enables"
printf '#================================================================\n'



# END OF FILE
