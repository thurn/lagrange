package com.firebase.client;

import java.util.List;
import java.util.Map;

/*-[
#import <Firebase/Firebase.h>
]-*/

public class Firebase extends Query {

  public static interface AuthListener {
    void onAuthError(FirebaseError error);

    void onAuthRevoked(FirebaseError error);

    void onAuthSuccess(Object authData);
  }

  public static interface CompletionListener {
    public void onComplete(FirebaseError error);
  }

  public static native Object createFirebase(String url) /*-[
    return [[Firebase alloc] initWithUrl: url];
  ]-*/;
  
  public Firebase(String url) {
    super(createFirebase(url));
  }
  
  public native String getName() /*-[
    Firebase *firebase = self->firebase_;
    return firebase.name;
  ]-*/;
  
  private static native Object createDictionary() /*-[
    return [[NSMutableDictionary alloc] init];
  ]-*/;
  
  private static native Object createArray() /*-[
    return [[NSMutableArray alloc] init];
  ]-*/;
  
  private static native void addToDictionary(Object dictionary, String key, Object value) /*-[
    [dictionary setValue: value forKey: key];
  ]-*/;
  
  private static native void addToArray(Object array, Object value) /*-[
    [array addObject: value];
  ]-*/;
  
  static Object convertMapToNsDictionary(@SuppressWarnings("rawtypes") Map map) {
    Object dictionary = createDictionary();
    for (Object key : map.keySet()) {
      addToDictionary(dictionary, key.toString(), map.get(key));
    }
    return dictionary;
  }
  
  static Object convertListToNsArray(@SuppressWarnings("rawtypes") List list) {
    Object array = createArray();
    for (Object value : list) {
      addToArray(array, value);
    }
    return array;
  }
  
  public void setValue(Object value) {
    setValue(value, null, null);
  }

  public void setValue(Object value, CompletionListener listener) {
    setValue(value, null, listener);
  }

  public void setValue(Object value, Object priority) {
    setValue(value, priority, null);
  }
  
  public void setValue(Object value, Object priority, CompletionListener listener) {
    if (value == null || value instanceof Number || value instanceof String) {
      setValueNative(value);
    } else if (value instanceof Boolean) {
      setValueNative(((Boolean)value).booleanValue());
    } else if (value instanceof List) {
      setValueNative(convertListToNsArray((List<?>)value));
    } else if (value instanceof Map) {
      setValueNative(convertMapToNsDictionary((Map<?, ?>)value));
    }
  }
  
  private native void setValueNative(Object value) /*-[
    Firebase *firebase = self->firebase_;
    [firebase setValue: value];
  ]-*/;
  
}
