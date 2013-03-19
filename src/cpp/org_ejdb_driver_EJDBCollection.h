/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ejdb_driver_EJDBCollection */

#ifndef _Included_org_ejdb_driver_EJDBCollection
#define _Included_org_ejdb_driver_EJDBCollection
#ifdef __cplusplus
extern "C" {
#endif
#undef org_ejdb_driver_EJDBCollection_JBIDXDROP
#define org_ejdb_driver_EJDBCollection_JBIDXDROP 1L
#undef org_ejdb_driver_EJDBCollection_JBIDXDROPALL
#define org_ejdb_driver_EJDBCollection_JBIDXDROPALL 2L
#undef org_ejdb_driver_EJDBCollection_JBIDXOP
#define org_ejdb_driver_EJDBCollection_JBIDXOP 4L
#undef org_ejdb_driver_EJDBCollection_JBIDXREBLD
#define org_ejdb_driver_EJDBCollection_JBIDXREBLD 8L
#undef org_ejdb_driver_EJDBCollection_JBIDXNUM
#define org_ejdb_driver_EJDBCollection_JBIDXNUM 16L
#undef org_ejdb_driver_EJDBCollection_JBIDXSTR
#define org_ejdb_driver_EJDBCollection_JBIDXSTR 32L
#undef org_ejdb_driver_EJDBCollection_JBIDXARR
#define org_ejdb_driver_EJDBCollection_JBIDXARR 64L
#undef org_ejdb_driver_EJDBCollection_JBIDXISTR
#define org_ejdb_driver_EJDBCollection_JBIDXISTR 128L
#undef org_ejdb_driver_EJDBCollection_JBTXBEGIN
#define org_ejdb_driver_EJDBCollection_JBTXBEGIN 1L
#undef org_ejdb_driver_EJDBCollection_JBTXCOMMIT
#define org_ejdb_driver_EJDBCollection_JBTXCOMMIT 2L
#undef org_ejdb_driver_EJDBCollection_JBTXROLLBACK
#define org_ejdb_driver_EJDBCollection_JBTXROLLBACK 4L
#undef org_ejdb_driver_EJDBCollection_JBTXSTATUS
#define org_ejdb_driver_EJDBCollection_JBTXSTATUS 8L
/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    txControl
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_ejdb_driver_EJDBCollection_txControl
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    ensureExists
 * Signature: (Lorg/ejdb/driver/EJDBCollection/Options;)V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_ensureExists
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    drop
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_drop
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    sync
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_sync
  (JNIEnv *, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    load
 * Signature: (Lorg/bson/types/ObjectId;)Lorg/bson/BSONObject;
 */
JNIEXPORT jobject JNICALL Java_org_ejdb_driver_EJDBCollection_load
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    save
 * Signature: (Lorg/bson/BSONObject;)Lorg/bson/types/ObjectId;
 */
JNIEXPORT jobject JNICALL Java_org_ejdb_driver_EJDBCollection_save
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    remove
 * Signature: (Lorg/bson/types/ObjectId;)V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_remove
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    setIndex
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_setIndex
  (JNIEnv *, jobject, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
