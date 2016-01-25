module Git
class Oid
  def to_s
    Git.oid_tostr_s(self)
  end
end
end
