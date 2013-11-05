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
      setValueId(value);
    } else if (value instanceof Boolean) {
      setValueId(((Boolean)value).booleanValue());
    } else if (value instanceof List) {
      setValueList((List)value);
    } else if (value instanceof Map) {
      setValueMap((Map)value);
    }
  }
  
  private native void setValueId(Object value) /*-[
    Firebase *firebase = self->firebase_;
    [firebase setValue: value];
  ]-*/;
  
  private native void setValueList(List value) /*-[
    Firebase *firebase = self->firebase_;
  ]-*/;
  
  private native void setValueMap(Map value) /*-[
    Firebase *firebase = self->firebase_;
  ]-*/;
  
}
