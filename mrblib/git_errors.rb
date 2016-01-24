module Git
  class Error < StandardError
    def initialize(msg)
      super(msg)
    end
  end
  
  class NoMemoryError < Error; end
  class OSError < Error; end
  class InvalidError < Error; end
  class ReferenceError < Error; end
  class ZLibError < Error; end
  class RepositoryError < Error; end
  class ConfigError < Error; end
  class RegexError < Error; end
  class ODBError < Error; end
  class IndexError < Error; end
  class ObjectError < Error; end
  class NetError < Error; end
  class TagError < Error; end
  class TreeError < Error; end
  class IndexerError < Error; end
  class SSLError < Error; end
  class SubmoduleError < Error; end
  class ThreadError < Error; end
  class StashError < Error; end
  class CheckoutError < Error; end
  class FetchHeadError < Error; end
  class MergeError < Error; end
  class SSHError < Error; end
  class FilterError < Error; end
  class RevertError < Error; end
  class CallbackError < Error; end
  class CherrypickError < Error; end
  class DescribeError < Error; end
  class RebaseError < Error; end
  class FileSystemError < Error; end
end
