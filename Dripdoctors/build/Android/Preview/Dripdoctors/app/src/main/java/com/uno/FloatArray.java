package com.uno;
import com.uno.UnoObject;

public class FloatArray extends UnoObject
{
    public FloatArray(long ptr) {
        super(ptr);
    }

    public float get(int index) {
        return com.Bindings.ExternedBlockHost.getFloat(this, index);
    }

    public float set(int index, float val) {
        return com.Bindings.ExternedBlockHost.setFloat(this, index, val);
    }

    public float[] copyArray()
    {
        return (float[])com.Bindings.ExternedBlockHost.copyFloatArray(this);
    }
}
