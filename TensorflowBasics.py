import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'
import tensorflow as tf

physical_devices = tf.config.list_physical_devices('GPU')

if len(physical_devices) > 0:
    tf.config.experimental.set_memory_growth(physical_devices[0], True)
else:
    print("No GPU devices found, using CPU instead.")

# Continue with the rest of your TensorFlow code...

# Initialization of tensors
x = tf.constant(4, shape=(1,1), dtype=tf.float32)

x= tf.constant([[1,2,3],[4,5,6]])

x= tf.ones((3,3))


x= tf.zeros((2,3))
x = tf.eye(3) # Identity matrix

x= tf.random.normal((3,3), mean=0, stddev=1)

x= tf.random.uniform((1,3), minval=0, maxval=1)


x= tf.range(start=1, limit=10, delta=2)

# Mathematical Operations
x = tf.constant([1,2,3])
y = tf.constant([9,8,7])

z = tf.add(x, y)
z = x + y
z = tf.subtract(x, y)
z = x - y
z = tf.divide(x, y)
z = x / y
z = tf.multiply(x, y)
z = x * y
z = tf.tensordot(x, y, axes=1)  # Dot Sum of tensor
x = tf.random.normal((2,3))
y = tf.random.normal((3,4))
z = tf.matmul(x, y)
z = x @ y

# Indexing
x = tf.constant([0,1,1,2,3,1,2,3])
# print(x[:])
# print(x[1:])
# print(x[1:4])
# print(x[::2])
# print(x[::-1])

indices = tf.constant([0, 3])
x_ing= tf.gather(x, indices) # indices of the tensor will be gathered

x = tf.constant([[1,2],
                [2,5],
                 [3,7]])
# print(x[0,:])
# print(x[0:2,:])

# Reshaping
x = tf.range(9)
print(x)

x = tf.reshape(x, (3,3))
print(x)

x = tf.transpose(x, perm=[1,0])
print(x)
