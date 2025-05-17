struct Stack<T: Copy, const S: usize> {
    data: [T; S],
    size: usize,
}

impl<T: Copy, const S: usize> Stack<T, S> {
    pub fn new(array: [T; S]) -> Self {
        Self {
            data: array,
            size: 0,
        }
    }

    pub fn push(&mut self, value: T) {
        if self.size != self.data.len() {
            self.data[self.size] = value;
            self.size += 1;
        }
    }

    pub fn pop(&mut self) -> Option<T> {
        if self.size != 0 {
            let tmp = self.data[self.size - 1];
            self.size -= 1;
            Some(tmp)
        } else {
            None
        }
    }
}
